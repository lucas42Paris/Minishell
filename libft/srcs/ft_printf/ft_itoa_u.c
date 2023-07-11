/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:17:04 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:17:05 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	ft_pow_u(unsigned int a, unsigned int b)
{
	if (b <= 0)
		return (1);
	if (b == 1)
		return (a);
	return (a * ft_pow_u(a, b - 1));
}

static int	highest_pow(unsigned int n)
{
	int	i;

	i = 9;
	while (n / ft_pow_u(10, i) == 0 && i > 0)
	{
		i--;
	}
	return (i);
}

char	*ft_itoa_u(unsigned int nb)
{
	char			*str;
	int				i;
	int				hp;

	i = 0;
	hp = highest_pow(nb);
	str = malloc(sizeof(char) * (hp + 2));
	if (!str)
		return (NULL);
	while (i < hp + 1)
	{
		str[i] = (nb / ft_pow_u(10, hp - i)) + 48;
		nb %= ft_pow_u(10, hp - i);
		i++;
	}
	str[i] = '\0';
	return (str);
}
