/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:29:49 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:29:50 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	out = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!out)
		return (NULL);
	ft_strlcpy(out, s1, len_s1 + 1);
	ft_strlcat(out, s2, len_s1 + len_s2 + 1);
	return (out);
}
