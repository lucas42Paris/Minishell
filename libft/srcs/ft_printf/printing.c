/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:17:14 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:17:15 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	lst_print(t_bilist *lst)
{
	int		len;
	int		size;
	char	*content;

	len = 0;
	while (lst)
	{
		size = (*lst).size;
		content = (*lst).content;
		if (size == 1)
		{
			if (content[0] == 0)
				write(1, content, 1);
		}
		ft_putstr_fd(content, 1);
		len += size;
		lst = (*lst).next;
	}
	return (len);
}
