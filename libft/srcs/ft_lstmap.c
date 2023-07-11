/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:26:52 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:26:52 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**out;
	t_list	*new;
	t_list	*first_el;

	first_el = ft_lstnew(f((*lst).content));
	out = &first_el;
	new = NULL;
	if (!first_el)
		return (NULL);
	while ((*lst).next)
	{
		lst = (*lst).next;
		new = ft_lstnew(f((*lst).content));
		if (!new)
		{
			ft_lstclear(out, del);
			return (NULL);
		}
		ft_lstadd_back(out, new);
	}
	return (*out);
}
