/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:39:42 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:39:42 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "executables.h"

t_executable	*executables_get_i(t_executables *executables, int index)
{
	return ((t_executable *)ft_lstget_i(*executables, index));
}
