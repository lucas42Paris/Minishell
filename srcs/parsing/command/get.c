/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:50:09 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:50:09 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

t_list	**command_get_ina(t_command *command)
{
	return (command->in_a);
}

char	**command_get_args_table(t_command *command)
{
	int		size_args;
	char	**table;
	int		i;

	i = 1;
	size_args = ft_lstsize(*command->args) + 1;
	table = (char **)malloc(sizeof(char *) * (size_args + 2));
	table[0] = command_get_name(command);
	while (i < size_args)
	{
		table[i] = lst_get_i(*command_get_args(command), i - 1);
		i++;
	}
	table[i] = NULL;
	return (table);
}
