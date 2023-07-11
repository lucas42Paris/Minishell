/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:36:07 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:36:07 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exit.h"

extern t_glob	*g_glob;

int	is_numeric(char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	exit_parse_args(char **args, long long *err_num)
{
	char	*arg;

	if (table_get_size(args) > 2)
	{
		error_msg("exit", "too many arguments", 0);
		return (1);
	}
	if (table_get_size(args) == 1)
		return (0);
	arg = ft_strtrim(args[1], " ");
	if (!arg)
		return (1);
	if (!is_numeric(arg))
	{
		*err_num = 2;
		error_msg2("exit", args[1], "numeric argument required", 0);
		free(arg);
		return (0);
	}
	if (long_long_atoi(arg, (long long *)err_num))
		error_msg2("exit", args[1], "numeric argument required", 0);
	free(arg);
	return (0);
}

int	builtin_exit(char **args)
{
	long long	err_num;

	err_num = 0;
	if (exit_parse_args(args, &err_num))
		return (1);
	if (err_num == 0)
	{
		err_num = glob_get_exit_status();
		if (err_num == -5)
			err_num = 130;
	}
	glob_set_state(0);
	return ((int )err_num);
}
