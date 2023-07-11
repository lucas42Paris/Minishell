/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell_get.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:56:50 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/24 13:02:01 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_list	**minishell_get_env(t_minishell *minishell)
{
	return (*(minishell->env));
}

struct termios	*minishell_get_terminal(t_minishell *minishell, int term_index)
{
	if (term_index > 3)
		return (NULL);
	return (&minishell->terminal[term_index]);
}
