/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paths_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:46:54 by lsalin            #+#    #+#             */
/*   Updated: 2023/07/11 11:56:40 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "execution.h"

int	is_dir(char *path)
{
	struct stat	statbuf;

	if (stat(path, &statbuf) != 0)
		return (0);
	return (S_ISDIR(statbuf.st_mode));
}

void	error(int error_status)
{
	exit(error_status);
}

int	msg(char *str1, char *str2, char *str3, int erno)
{
	ft_putstr_fd("minishell: ", 2);
	ft_putstr_fd(str1, 2);
	ft_putstr_fd(str2, 2);
	ft_putendl_fd(str3, 2);
	return (erno);
}

void	free_strs(char *str, char **array_of_strs)
{
	int	i;

	if (str != NULL)
	{
		free(str);
		str = NULL;
	}
	if (array_of_strs != NULL)
	{
		i = 0;
		while (array_of_strs[i])
		{
			free(array_of_strs[i]);
			i++;
		}
		free(array_of_strs);
		array_of_strs = NULL;
	}
}

char	*set_error(int *errnum, int err, char *cmd)
{
	if (err == 126)
	{
		msg(cmd, ": ", "Is a directory", 1);
		*errnum = 126;
		return (NULL);
	}
	if (err == 127)
	{
		error_msg(cmd, "command not found", 0);
		*errnum = 127;
	}
	if (err == 130)
	{
		error_msg(cmd, "Not a directory", 0);
		*errnum = 126;
	}
	if (err == 131)
	{
		error_msg(cmd, "No such file or directory", 0);
		*errnum = 127;
	}
	return (NULL);
}
