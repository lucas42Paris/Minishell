/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:16:41 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:16:41 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*trim(char *str, int len)
{
	if (len < (int)ft_strlen(str))
		str[len + 1] = '\0';
	return (str);
}

char	*left_pad(char *str, int len, char c)
{
	int		len_str;
	int		len_prefix;
	char	*prefix;

	len_str = (int )ft_strlen(str);
	if (len > len_str)
	{
		len_prefix = len - len_str;
		prefix = malloc(sizeof(char) * (len_prefix + 1));
		ft_charset(prefix, c, len_prefix);
		str = add_prefix(str, prefix);
		free(prefix);
	}
	return (str);
}

char	*right_pad(char *str, int len, char c)
{
	int		len_str;
	char	*prefix;
	char	*str_cp;
	int		len_prefix;

	len_str = (int )ft_strlen(str);
	if (len > len_str)
	{
		str_cp = str;
		len_prefix = len - len_str;
		prefix = malloc(sizeof(char) * (len_prefix + 1));
		ft_charset(prefix, c, len_prefix);
		str = add_prefix(prefix, str);
		free(str_cp);
	}
	return (str);
}
