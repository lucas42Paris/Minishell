/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:31:15 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:31:15 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static void	measure_trim(int lens[3], char const *s1, char const *set)
{
	int	len_s1;
	int	i;

	len_s1 = ft_strlen(s1);
	lens[1] = len_s1;
	i = 0;
	while (in_set(s1[i], set))
		i++;
	lens[1] -= i;
	lens[0] = i;
	i = 0;
	while (in_set(s1[len_s1 - 1 - i], set))
		i++;
	lens[1] -= i;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*out;
	int		lens[2];

	measure_trim(lens, s1, set);
	i = 0;
	out = (char *)malloc(sizeof(char) * (lens[1] + 1));
	if (!out)
		return (NULL);
	while (i < lens[1])
	{
		out[i] = s1[lens[0] + i];
		i++;
	}
	out[i] = 0;
	return (out);
}
