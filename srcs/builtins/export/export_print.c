/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:36:25 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:36:25 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "export.h"

void	export_el_print(void *content)
{
	t_dict	*dict;

	dict = (t_dict *)content;
	printf("declare -x ");
	printf("%s", dict->key);
	if (dict->value)
		printf("=\"%s\"\n", dict->value);
	else
		printf("\n");
}

void	export_print(void)
{
	ft_lstiter(*glob_get_env(), &export_el_print);
}
