/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:16:59 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:16:59 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*free_buf(char *buf)
{
	free(buf);
	return (NULL);
}

void	*free_lst(t_list *lst)
{
	ft_lstclear(&lst, &free);
	return (NULL);
}

void	*free_lst_buf(t_list *lst, char *buf)
{
	free(buf);
	ft_lstclear(&lst, &free);
	return (NULL);
}

void	*ft_realloc(void *ptr, size_t size)
{
	void	*ptr2;

	ptr2 = malloc(size);
	free(ptr);
	return (ptr2);
}
