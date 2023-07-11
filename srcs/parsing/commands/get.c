/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:50:53 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:50:53 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

t_command	*commands_get_i(t_commands *commands, int i)
{
	int		j;
	t_list	*cmd;

	j = 0;
	if (!commands)
		return (NULL);
	cmd = *commands;
	while (j < i)
	{
		cmd = cmd->next;
		if (!cmd)
			return (NULL);
		j++;
	}		
	return ((t_command *)cmd->content);
}

char	*commands_get_i_command(t_commands *commands, int i)
{
	t_command	*cmd;

	if (!commands)
		return (NULL);
	cmd = commands_get_i(commands, i);
	return (cmd->command);
}

t_list	**commands_get_i_args(t_commands *commands, int i)
{
	t_command	*cmd;

	if (!commands)
		return (NULL);
	cmd = commands_get_i(commands, i);
	return (cmd->args);
}

t_list	**commands_get_i_out(t_commands *commands, int i)
{
	t_command	*cmd;

	if (!commands)
		return (NULL);
	cmd = commands_get_i(commands, i);
	return (cmd->out);
}

t_list	**commands_get_i_outa(t_commands *commands, int i)
{
	t_command	*cmd;

	if (!commands)
		return (NULL);
	cmd = commands_get_i(commands, i);
	return (cmd->out_a);
}
