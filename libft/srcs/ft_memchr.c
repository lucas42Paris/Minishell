/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:27:16 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:27:18 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	x;
	size_t			i;

	x = c;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == x)
			return ((void *)s + i);
		i++;
	}
	if (((unsigned char *)s)[i] == x)
		return ((void *)s + i);
	else
		return (NULL);
}
