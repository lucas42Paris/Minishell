/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:39:32 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:39:33 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "executables.h"

void	executables_dispose(t_executables *executables)
{
	ft_lstclear(executables, (void *)executable_destroy);
}

void	executables_free(t_executables *executables)
{
	free(executables);
}

void	executables_destroy(t_executables *executables)
{
	executables_dispose(executables);
	executables_free(executables);
}
