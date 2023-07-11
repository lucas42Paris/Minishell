/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_init2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:55:09 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:55:09 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "token.h"

int	token_init_in(t_token *token, int index, char c)
{
	token->type = In;
	token->str = NULL;
	token->current_index = index;
	token->current_char = c;
	return (0);
}

int	token_init_ina(t_token *token, int index, char c)
{
	token->type = Ina;
	token->str = NULL;
	token->current_index = index;
	token->current_char = c;
	return (0);
}
