/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:54:30 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:54:30 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tokenizer.h"

void	_token_print(void *content)
{
	t_token	*token;

	token = (t_token *)content;
	token_print(token);
}

void	tokenizer_print_tokens(t_tokenizer *tokenizer)
{
	ft_lstiter(*(tokenizer->tokens), &_token_print);
}
