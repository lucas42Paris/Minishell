/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   accumulator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:51:39 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:51:39 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expander.h"

void	expander_reset_acc(t_expander *expander)
{
	acc_reset(expander->acc);
}

int	expander_is_empty_acc(t_expander *expander)
{
	return (acc_is_empty(expander->acc));
}

int	expander_set_not_empty_acc(t_expander *expander)
{
	return (acc_set_not_empty(expander->acc));
}

int	expander_accumulate(t_expander *expander)
{
	acc_accumulate(expander->acc, *(expander->cmd_ptr));
	expander_move_cursor(expander);
	return (0);
}

int	expander_acc_concat(t_expander *expander, char *str)
{
	if (acc_concat(expander->acc, str))
		return (1);
	return (0);
}
