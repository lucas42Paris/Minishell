/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   glob_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:48:25 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:48:25 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "glob.h"

extern t_glob	*g_glob;

void	glob_set_env(t_list **env)
{
	*(g_glob->env) = env;
}

void	glob_set_exit_status(int exit_status)
{
	g_glob->exit_status = exit_status;
}

void	glob_set_state(int state)
{
	g_glob->activated = state;
}
