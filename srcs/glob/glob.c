/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   glob.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:48:29 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/23 11:38:32 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "glob.h"

extern t_glob	*g_glob;

void	glob_print(t_bool print_env)
{
	printf("Glob : \n");
	printf("Activated : %d\n", glob_get_state());
	printf("Exit status : %d\n", glob_get_exit_status());
	if (print_env)
		env_print();
}
