/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_unused_fds.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:45:42 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:45:42 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "execution.h"

int	execution_close_unused_pipes(t_execution *execution, int index)
{
	int	i;
	int	pipe[2];

	i = 0;
	while (i < execution->executables_size - 1)
	{
		if (i != index - 1 && i != index)
		{
			pipe[0] = execution->pipes[i][0];
			pipe[1] = execution->pipes[i][1];
			if (close_pipe(pipe))
				return (1);
		}
		i++;
	}
	return (0);
}

int	execution_close_unused_files(t_execution *execution, int index)
{
	int				i;
	t_executable	*executable;

	i = 0;
	while (i < execution->executables_size)
	{
		if (i != index)
		{
			executable = execution_get_executable_i(execution, i);
			if (executable_close_files(executable))
				return (1);
		}
		i++;
	}
	return (0);
}

int	execution_close_unused(t_execution *execution, int index)
{
	if (execution_close_unused_pipes(execution, index))
		return (1);
	if (execution_close_unused_files(execution, index))
		return (1);
	return (0);
}
