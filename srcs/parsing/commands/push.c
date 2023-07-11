/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:51:08 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:51:08 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

int	commands_push(t_commands *commands, t_command *command)
{
	t_list	*new_command;

	new_command = ft_lstnew((void *)command);
	if (!new_command)
		return (1);
	ft_lstadd_back(commands, new_command);
	return (0);
}
