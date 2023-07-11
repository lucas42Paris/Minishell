/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:46:03 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:46:04 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "execution.h"

int	execution_launch_exec(t_execution *execution, char *path)
{
	t_command	*command;
	char		**env;

	command = execution_get_current_command(execution);
	if (execution_is_builtin(execution))
		return (execution_launch_builtin(execution));
	env = glob_env_get_table();
	if (!env)
		return (1);
	if (execve(path, command_get_args_table(command), env) == -1)
	{
		table_free(env);
		return (1);
	}
	return (0);
}

int	execution_launch_child(t_execution *execution, int err, int fd[2], char *p)
{
	if (execution_dup_in(fd[0]))
		return (1);
	if (execution_dup_out(fd[1]))
		return (1);
	err = execution_launch_exec(execution, p);
	close_fd(fd[0]);
	close_fd(fd[1]);
	return (err);
}

int	execution_child(t_execution *execution)
{
	t_executable	*executable;
	int				fd[2];
	int				err;
	char			*command;
	char			*path;

	err = 0;
	executable = execution_get_current(execution);
	executable_get_fds_close(executable, fd);
	execution_close_unused(execution, execution->executable_index);
	if (!execution_is_builtin(execution) && !(fd[0] == -1 || fd[1] == -1))
	{
		command = command_get_name(execution_get_current_command(execution));
		path = get_user_cmd(command, &err);
	}
	if (err == 0 && (fd[0] == -1 || fd[1] == -1))
		err = 1;
	if (!err)
		err = execution_launch_child(execution, err, fd, path);
	close_pipe(fd);
	minishell_destroy(execution->minishell);
	parser_destroy(execution->parser);
	execution_destroy(execution);
	glob_destroy();
	return (err);
}

int	execution_fork_process(t_execution *execution)
{
	int	pid;

	pid = fork();
	if (pid == -1)
		return (1);
	if (pid == 0)
		exit(execution_child(execution));
	else
		execution->last_pid = pid;
	return (0);
}
