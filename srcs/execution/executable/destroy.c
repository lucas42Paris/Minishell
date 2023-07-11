/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:38:38 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:38:46 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "executable.h"

void	executable_dispose(t_executable *executable)
{
	int	i;

	i = 0;
	while (i < executable->in_size)
	{
		free(executable->in_files[i]);
		i++;
	}
	free(executable->in_files);
	free(executable->out_files);
}

void	executable_free(t_executable *executable)
{
	free(executable);
}

void	executable_destroy(t_executable *executable)
{
	executable_dispose(executable);
	executable_free(executable);
}
