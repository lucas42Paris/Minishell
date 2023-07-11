/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:52:02 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:52:02 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expander.h"

char	expander_get_last_char(t_expander *expander)
{
	if (expander->cmd_i > 0)
	{
		return (*(expander->cmd_ptr - 1));
	}
	return (0);
}

char	expander_get_char(t_expander *expander)
{
	return (*(expander->cmd_ptr));
}

char	expander_get_next_char(t_expander *expander, int s)
{
	if (expander->cmd_i + s > expander->size)
		return (0);
	return ((expander->cmd_ptr)[s]);
}
