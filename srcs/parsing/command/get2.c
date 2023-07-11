/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:50:13 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:50:13 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

char	*command_get_name(t_command *command)
{
	return (command->command);
}

t_list	**command_get_args(t_command *command)
{
	return (command->args);
}

t_list	**command_get_out(t_command *command)
{
	return (command->out);
}

t_list	**command_get_outa(t_command *command)
{
	return (command->out_a);
}

t_list	**command_get_in(t_command *command)
{
	return (command->in);
}
