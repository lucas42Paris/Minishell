/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_unused.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:38:20 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:38:21 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "executable.h"

int	executable_close_unused_infiles(t_executable *executable)
{
	return (_close_in_fd_table(executable->in_files, executable->in_size - 1));
}

int	executable_close_unused_outfiles(t_executable *executable)
{
	return (_close_fd_table(executable->out_files, executable->out_size - 1));
}
