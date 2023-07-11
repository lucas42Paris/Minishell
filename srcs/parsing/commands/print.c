/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:51:04 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:51:05 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void	_command_print(void *command)
{
	command_print((t_command *)command);
}

void	commands_print(t_commands *commands)
{
	ft_lstiter(*commands, &_command_print);
}
