/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   noquote_chars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:53:44 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:53:44 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tokenize.h"

int	tokenize_noquote_quote(t_tokenizer *tokenizer)
{
	tokenizer->state = Quote;
	tokenizer_move_cursor(tokenizer);
	return (0);
}

int	tokenize_noquote_squote(t_tokenizer *tokenizer)
{
	tokenizer->state = SingleQuote;
	tokenizer_move_cursor(tokenizer);
	return (0);
}

int	tokenize_noquote_pipe(t_tokenizer *tokenizer)
{
	if (tokenizer_is_empty_acc(tokenizer))
	{
		if (tokenizer_push_pipe(tokenizer))
			return (1);
		tokenizer_move_cursor(tokenizer);
		return (0);
	}
	if (tokenizer_push_string(tokenizer))
		return (1);
	reset_acc(tokenizer);
	if (tokenizer_push_pipe(tokenizer))
		return (1);
	tokenizer_move_cursor(tokenizer);
	return (0);
}

int	tokenize_noquote_space(t_tokenizer *tokenizer)
{
	if (tokenizer_is_empty_acc(tokenizer))
	{
		tokenizer_move_cursor(tokenizer);
		return (0);
	}
	if (tokenizer_push_string(tokenizer))
		return (1);
	reset_acc(tokenizer);
	tokenizer_move_cursor(tokenizer);
	return (0);
}
