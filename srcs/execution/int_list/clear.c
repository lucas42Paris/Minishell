/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:44:27 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:44:29 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_list.h"

void	int_lstclear(t_intlist **lst)
{
	t_intlist	*el;
	t_intlist	*next_el;

	next_el = NULL;
	el = *lst;
	while (el)
	{
		next_el = (*el).next;
		free(el);
		el = next_el;
	}
	*lst = NULL;
}
