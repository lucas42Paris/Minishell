/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_conv_csudi.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:16:50 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:16:50 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	from_c(char c, char **str)
{
	*str = (char *)malloc(sizeof(char) * 2);
	if (!(*str))
		return (-1);
	if (c == 0)
		(*str)[0] = '\0';
	else
	{
		(*str)[0] = (unsigned char )c;
		(*str)[1] = '\0';
	}
	return (1);
}

int	from_u(unsigned int n, char **str)
{
	*str = ft_itoa_u(n);
	if (!(*str))
		return (-1);
	return (ft_strlen(*str));
}

int	from_s(char *str, char **new_str)
{
	if (!str)
		*new_str = ft_strdup("(null)");
	else
		*new_str = ft_strdup(str);
	if (!(*new_str))
		return (-1);
	else
		return (ft_strlen(*new_str));
}

int	from_d_i(int n, char **str)
{
	*str = ft_itoa(n);
	if (!(*str))
		return (-1);
	return (ft_strlen(*str));
}
