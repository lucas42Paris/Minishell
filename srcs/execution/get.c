/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:46:26 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:46:26 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "execution.h"

t_executable	*execution_get_executable_i(t_execution *execution, int index)
{
	return (executables_get_i(execution->executables, index));
}

t_executable	*execution_get_current(t_execution *execution)
{
	int	index;

	index = execution->executable_index;
	return (executables_get_i(execution->executables, index));
}

t_command	*execution_get_current_command(t_execution *execution)
{
	t_executable	*executable;

	executable = execution_get_current(execution);
	return (executable->command);
}

char	*execution_get_current_command_name(t_execution *execution)
{
	return (command_get_name(execution_get_current_command(execution)));
}

t_minishell	*execution_get_minishell(t_execution *execution)
{
	return (execution->minishell);
}
