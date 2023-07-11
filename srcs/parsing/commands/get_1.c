/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:50:48 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:50:48 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

t_list	**commands_get_i_in(t_commands *commands, int i)
{
	t_command	*cmd;

	if (!commands)
		return (NULL);
	cmd = commands_get_i(commands, i);
	return (cmd->in);
}

t_list	**commands_get_i_ina(t_commands *commands, int i)
{
	t_command	*cmd;

	if (!commands)
		return (NULL);
	cmd = commands_get_i(commands, i);
	return (cmd->in_a);
}
