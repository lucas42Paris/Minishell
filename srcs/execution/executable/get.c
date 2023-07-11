/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:38:59 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:38:59 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "executable.h"

char	*executable_get_name(t_executable *exe)
{
	if (!exe)
		return (NULL);
	return (command_get_name(exe->command));
}

int	**executable_get_in_files(t_executable *exe)
{
	if (!exe)
		return (NULL);
	return (exe->in_files);
}

int	*executable_get_out_files(t_executable *exe)
{
	if (!exe)
		return (NULL);
	return (exe->out_files);
}
