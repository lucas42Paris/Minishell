/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:52:12 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:52:12 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expander.h"

int	expander_move_cursor_two(t_expander *expander)
{
	expander_move_cursor(expander);
	expander_move_cursor(expander);
	return (0);
}

int	expander_move_cursor(t_expander *expander)
{
	(expander->cmd_ptr)++;
	(expander->cmd_i)++;
	return (0);
}

int	expander_move_accumulator(t_expander *expander)
{
	acc_move(expander->acc);
	return (0);
}
