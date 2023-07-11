/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:39:50 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:44:17 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "executables.h"

void	executables_print(t_executables *executables)
{
	ft_lstiter(*executables, &executable_print);
}
