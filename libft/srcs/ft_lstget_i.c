/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:26:16 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:26:17 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstget_i(t_list *lst, int index)
{
	int		i;

	i = 0;
	while (i < index)
	{
		if (!lst)
			return (NULL);
		lst = lst->next;
		i++;
	}
	if (!lst)
		return (NULL);
	return (lst->content);
}
