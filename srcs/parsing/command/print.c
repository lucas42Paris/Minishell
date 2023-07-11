/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:50:26 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:50:27 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void	command_print(t_command *command)
{
	printf("Command :\n");
	printf("- command : %s\n", command->command);
	printf("- args : ");
	print_str_chain(*command->args);
	printf("\n- out : ");
	print_funnel_chain(*command->out);
	printf("\n- in : ");
	print_funnel_chain(*command->in);
	printf("\n");
	printf("\n");
}
