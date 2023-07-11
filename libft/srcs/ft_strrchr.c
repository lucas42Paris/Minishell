/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:31:09 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:31:09 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		x;
	const char	*loc;

	x = c;
	loc = NULL;
	while (*s)
	{
		if (*s == x)
			loc = s;
		s++;
	}
	if (*s == x)
		loc = s;
	return ((char *)loc);
}
