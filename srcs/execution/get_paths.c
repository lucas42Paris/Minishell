/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_paths.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:46:21 by lsalin            #+#    #+#             */
/*   Updated: 2023/07/11 11:56:26 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "execution.h"

static char	*extract_path(void)
{
	char	*path;

	path = glob_getenv_var("PATH");
	if (!path)
		return (NULL);
	path = ft_strdup(path);
	return (path);
}

static char	**make_executable_paths(char **array_of_paths)
{
	int		i;
	char	*tmp;

	tmp = NULL;
	i = 0;
	while (array_of_paths[i])
	{
		tmp = array_of_paths[i];
		array_of_paths[i] = ft_strjoin(array_of_paths[i], "/");
		free_strs(tmp, NULL);
		i++;
	}
	return (array_of_paths);
}

static char	**fill_array_of_paths(void)
{
	char	*env_path_str;
	char	**array_of_paths;

	env_path_str = extract_path();
	if (!env_path_str)
		return (NULL);
	if (*env_path_str == '\0')
		return (NULL);
	array_of_paths = ft_split(env_path_str, ':');
	free_strs(env_path_str, NULL);
	if (!array_of_paths)
		return (NULL);
	array_of_paths = make_executable_paths(array_of_paths);
	if (!array_of_paths)
		return (NULL);
	return (array_of_paths);
}

static char	*get_valid_path(char *cmd, char **array_of_paths, int *errnum)
{
	int		i;
	char	*path_ultime;

	i = 0;
	path_ultime = NULL;
	while (array_of_paths[i])
	{
		path_ultime = ft_strjoin(array_of_paths[i], cmd);
		if (!path_ultime)
		{
			free_strs(NULL, array_of_paths);
			error_msg("", "unexpected error", 0);
		}
		if (is_dir(path_ultime))
		{
			error_msg(cmd, "Is a directory", 0);
			*errnum = 126;
		}
		else if (access(path_ultime, F_OK | X_OK) == 0)
			return (path_ultime);
		free_strs(path_ultime, NULL);
		i++;
	}
	return (NULL);
}

char	*get_user_cmd(char *cmd, int *errnum)
{
	char	**env_paths;
	char	*path_ultime;

	if (is_dir(cmd))
		return (set_error(errnum, 126, cmd));
	if (cmd[0] == '\0')
		return (set_error(errnum, 127, cmd));
	if (cmd[0] == '/' && access(cmd, F_OK | X_OK))
		return (set_error(errnum, 130, cmd));
	if (ft_strlen(cmd) > 1)
	{
		if (cmd[0] == '.' && cmd[1] == '/' && access(cmd, F_OK | X_OK))
			return (set_error(errnum, 131, cmd));
	}
	if (access(cmd, F_OK | X_OK) == 0)
		return (ft_strdup(cmd));
	env_paths = fill_array_of_paths();
	if (!env_paths)
		return (set_error(errnum, 131, cmd));
	path_ultime = get_valid_path(cmd, env_paths, errnum);
	if (!path_ultime)
		set_error(errnum, 127, cmd);
	free_strs(NULL, env_paths);
	return (path_ultime);
}
