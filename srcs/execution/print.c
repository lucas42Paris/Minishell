/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:47:11 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:47:12 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "execution.h"

void	execution_print(t_execution *execution)
{
	printf("Executables : \n");
	executables_print(execution->executables);
	printf("Pipes : \n");
	print_pipes(execution->pipes);
	printf("Executable size : %d\n", (int )execution->executables_size);
	printf("Last pid : %d\n", execution->last_pid);
	printf("\n");
}

void	execution_print_full(t_execution *execution)
{
	execution_print(execution);
	minishell_print(execution_get_minishell(execution), 1);
}
