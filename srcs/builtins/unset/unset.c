/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:37:33 by lsalin            #+#    #+#             */
/*   Updated: 2023/07/11 11:57:44 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unset.h"

bool	is_valid_env_var(char *var)
{
	int	i;

	i = 0;
	if (ft_isalpha(var[i]) == 0 && var[i] != '_')
		return (false);
	i++;
	while (var[i] && var[i] != '=')
	{
		if (ft_isalnum(var[i]) == 0 && var[i] != '_')
			return (false);
		i++;
	}
	return (true);
}

int	get_env_var_index(char **env, char *var)
{
	char	*tmp;
	int		i;

	tmp = ft_strjoin(var, "=");
	if (!tmp)
		return (-1);
	i = 0;
	while (env[i])
	{
		if (ft_strncmp(tmp, env[i], ft_strlen(tmp)) == 0)
		{
			free(tmp);
			return (i);
		}
		i++;
	}
	free(tmp);
	return (-1);
}

int	env_var_nbr(char **env)
{
	int	i;

	i = 0;
	while (env && env[i])
		i++;
	return (i);
}

bool	remove_env_var(char **env, int index)
{
	int	i;

	if (index > env_var_nbr(env))
		return (false);
	free(env[index]);
	i = index;
	while (env[i + 1])
	{
		env[i] = ft_strdup(env[i + 1]);
		if (!env[i])
			return (1);
		free(env[i + 1]);
		i++;
	}
	env[i] = NULL;
	if (!env)
		return (false);
	return (true);
}

int	unset(char **args)
{
	int		i;
	int		exit;

	exit = EXIT_SUCCESS;
	i = 1;
	while (args[i])
	{
		if (is_valid_env_var(args[i]) == 0 || ft_strchr(args[i], '=') != NULL)
		{
			if (args[i][0] != '\0')
			{
				ft_putstr_fd("minishell: unset: `", 2);
				ft_putstr_fd(args[i], 2);
				ft_putstr_fd("': not a valid identifier\n", 2);
			}
			exit = EXIT_FAILURE;
		}
		else
		{
			glob_remove_var(args[i]);
		}
		i++;
	}
	return (exit);
}
