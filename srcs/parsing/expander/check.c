/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:51:45 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:51:46 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expander.h"

int	expander_eol(t_expander *expander)
{
	return (!(*(expander->cmd_ptr)));
}