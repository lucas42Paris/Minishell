/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   noquote.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:53:53 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:53:53 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tokenize.h"

int	tokenize_noquote(t_tokenizer *tokenizer)
{
	if (tokenizer_get_char(tokenizer) == '"')
		return (tokenize_noquote_quote(tokenizer));
	if (tokenizer_get_char(tokenizer) == '\'')
		return (tokenize_noquote_squote(tokenizer));
	if (tokenizer_get_char(tokenizer) == '|')
		return (tokenize_noquote_pipe(tokenizer));
	if (tokenizer_get_char(tokenizer) == '>')
		return (tokenize_noquote_out(tokenizer));
	if (tokenizer_get_char(tokenizer) == '<')
		return (tokenize_noquote_in(tokenizer));
	if (tokenizer_get_char(tokenizer) == ' ')
		return (tokenize_noquote_space(tokenizer));
	tokenizer_accumulate(tokenizer);
	return (0);
}
