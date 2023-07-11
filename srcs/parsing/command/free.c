/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:49:58 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:49:59 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void	_free_string(void *str)
{
	free(str);
}

void	_free_funnel(void *funnel)
{
	t_funnel	*tmp;

	tmp = (t_funnel *)funnel;
	free(tmp->filename);
	free(tmp);
}

void	command_dispose(t_command *command)
{
	free(command->command);
	ft_lstclear(command->args, &_free_string);
	ft_lstclear(command->out, &_free_funnel);
	ft_lstclear(command->in, &_free_funnel);
	free(command->args);
	free(command->out);
	free(command->in);
}

void	command_free(t_command *command)
{
	free(command);
}

void	command_destroy(t_command *command)
{
	command_dispose(command);
	command_free(command);
}
