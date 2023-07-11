/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:45:50 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:45:51 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "execution.h"

void	execution_dispose(t_execution *execution)
{
	free_pipes(execution->pipes, execution->executables_size);
	executables_destroy(execution->executables);
}

void	execution_free(t_execution *execution)
{
	free(execution);
}

void	execution_destroy(t_execution *execution)
{
	execution_dispose(execution);
	execution_free(execution);
}
