/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   glob_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:48:16 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:48:16 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "glob.h"

extern t_glob	*g_glob;

void	glob_destroy(void)
{
	ft_lstclear(*g_glob->env, &env_el_destroy);
	free(*g_glob->env);
	free(g_glob->env);
	free(g_glob);
}

int	glob_init(int error, char **envp)
{
	g_glob = (t_glob *)malloc(sizeof(t_glob));
	if (!g_glob)
		return (1);
	g_glob->activated = 1;
	g_glob->exit_status = error;
	g_glob->env = (t_list ***)malloc(sizeof(t_list **));
	if (!g_glob->env)
		return (1);
	if (realloc_env_vars(envp, g_glob->env))
		return (1);
	if (!*g_glob->env)
		return (1);
	return (0);
}
