/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:36:52 by lsalin            #+#    #+#             */
/*   Updated: 2023/07/11 11:57:26 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pwd.h"

int	pwd_builtin(char **args)
{
	char	*buf;
	char	*cwd;

	(void)args;
	buf = (char *)malloc(sizeof(char) * (PATH_MAX + 1));
	cwd = getcwd(buf, PATH_MAX);
	if (cwd)
	{
		ft_putendl_fd(cwd, STDOUT_FILENO);
		free(buf);
		return (EXIT_SUCCESS);
	}
	free(buf);
	if (glob_env_has_var("PWD"))
		printf("%s\n", glob_getenv_var("PWD"));
	return (EXIT_FAILURE);
}
