/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_fd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:38:55 by lsalin            #+#    #+#             */
/*   Updated: 2023/07/11 11:55:42 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "executable.h"

int	executable_get_in_close(t_executable *executable, int *fd)
{
	if (executable->in_size == 0 && !executable->in_pipe)
	{
		*fd = STDIN_FILENO;
		return (0);
	}
	if (executable->in_size == 0)
	{
		*fd = executable->in_pipe[0];
		if (close_fd(executable->in_pipe[1]))
			return (1);
		return (executable_close_infiles(executable));
	}
	if (close_pipe(executable->in_pipe))
		return (1);
	if (close_fd(executable->in_files[executable->in_size - 1][1]))
		return (1);
	*fd = executable->in_files[executable->in_size - 1][0];
	return (executable_close_unused_infiles(executable));
}

int	executable_get_out_close(t_executable *executable, int *fd)
{
	if (executable->out_size == 0 && !executable->out_pipe)
	{
		*fd = STDOUT_FILENO;
		return (0);
	}
	if (executable->out_size == 0)
	{
		*fd = executable->out_pipe[1];
		if (close_fd(executable->out_pipe[0]))
			return (1);
		return (executable_close_outfiles(executable));
	}
	if (close_pipe(executable->out_pipe))
		return (1);
	*fd = executable->out_files[executable->out_size - 1];
	return (executable_close_unused_outfiles(executable));
}

int	executable_get_fds_close(t_executable *executable, int fd[2])
{
	fd[0] = -1;
	fd[1] = -1;
	if (executable_get_in_close(executable, &fd[0]))
		return (1);
	if (executable_get_out_close(executable, &fd[1]))
		return (1);
	return (0);
}
