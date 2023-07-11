/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   glob_get.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:48:09 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:48:10 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "glob.h"

extern t_glob	*g_glob;

int	glob_get_state(void)
{
	return (g_glob->activated);
}

int	glob_get_exit_status(void)
{
	return (g_glob->exit_status);
}

t_list	**glob_get_env(void)
{
	return (*(g_glob->env));
}
