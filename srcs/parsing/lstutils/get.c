/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:52:26 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:52:26 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstutils.h"

void	*lst_get_i(t_list *lst, int i)
{
	int	j;

	j = 0;
	if (i < 0 || i > ft_lstsize(lst))
		return (NULL);
	while (j < i)
	{
		lst = lst->next;
		if (!lst)
			return (NULL);
		j++;
	}
	return ((char *)lst->content);
}

t_list	*lst_get_i_lst(t_list *lst, int i)
{
	int	j;

	j = 0;
	if (i < 0 || i > ft_lstsize(lst))
		return (NULL);
	while (j < i)
	{
		lst = lst->next;
		if (!lst)
			return (NULL);
		j++;
	}
	return (lst);
}

char	*lst_get_last(t_list *lst)
{
	int		size;
	int		j;

	size = ft_lstsize(lst);
	j = 0;
	if (!lst)
		return (NULL);
	while (j < size - 1)
	{
		lst = lst->next;
		j++;
	}
	return ((char *)(lst->content));
}
