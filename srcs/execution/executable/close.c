/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:38:28 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:38:29 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "executable.h"

int	_close_fd_table(int *table, int table_size)
{
	int	i;

	i = 0;
	while (i < table_size)
	{
		if (close_fd(table[i]))
			return (1);
		i++;
	}
	return (0);
}

int	_close_in_fd_table(int **table, int table_size)
{
	int	i;

	i = 0;
	while (i < table_size)
	{
		if (close_pipe(table[i]))
			return (1);
		i++;
	}
	return (0);
}

int	executable_close_infiles(t_executable *executable)
{
	return (_close_in_fd_table(executable->in_files, executable->in_size));
}

int	executable_close_outfiles(t_executable *executable)
{
	return (_close_fd_table(executable->out_files, executable->out_size));
}

int	executable_close_files(t_executable *executable)
{
	if (executable_close_infiles(executable))
		return (1);
	if (executable_close_outfiles(executable))
		return (1);
	return (0);
}
