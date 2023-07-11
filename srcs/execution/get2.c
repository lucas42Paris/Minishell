/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:46:30 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:46:30 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "execution.h"

int	execution_is_command(t_execution *execution)
{
	if (command_get_name(execution_get_current_command(execution)))
		return (1);
	return (0);
}
