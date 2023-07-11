/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:49:46 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:49:47 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

int	command_add_in_a(t_command *command, char *str)
{
	t_funnel	*funnel;

	funnel = (t_funnel *)malloc(sizeof(t_funnel));
	if (!funnel)
		return (1);
	funnel->filename = _new_str(str);
	if (!funnel->filename)
		return (1);
	funnel->type = Ina;
	ft_lstadd_back(command->in, ft_lstnew(funnel));
	return (0);
}
