/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:44:47 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:44:48 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_list.h"

void	int_lstiter(t_intlist *lst, void (*f)(int))
{
	while (lst)
	{
		f((*lst).content);
		lst = (*lst).next;
	}
}

void	_int_print(int i)
{
	printf("%d, ", i);
}

void	int_lstprint(t_intlist *lst)
{
	if (lst)
		int_lstiter(lst, &_int_print);
	printf("\n");
}
