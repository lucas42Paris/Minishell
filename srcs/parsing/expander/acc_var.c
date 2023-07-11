/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   acc_var.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:51:34 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:51:34 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expander.h"

int	expander_is_empty_acc_var(t_expander *expander)
{
	return (acc_is_empty(expander->acc_var));
}

void	expander_reset_acc_var(t_expander *expander)
{
	acc_reset(expander->acc_var);
}

int	expander_accumulate_var(t_expander *expander)
{
	acc_accumulate(expander->acc_var, *(expander->cmd_ptr));
	expander_move_cursor(expander);
	return (0);
}
