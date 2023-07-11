/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:31:19 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:33:19 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		len_out;
	size_t		len_origin;
	size_t		i;
	char		*out;

	i = 0;
	len_origin = ft_strlen(s);
	if (len < len_origin)
		len_out = len;
	else
		len_out = len_origin;
	out = (char *)malloc(sizeof(char) * (len_out + 1));
	if (!out)
		return (NULL);
	while (i < len_out)
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
