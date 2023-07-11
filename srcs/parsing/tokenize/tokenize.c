/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokenize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:54:06 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:54:06 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tokenize.h"

int	tokenize(t_tokenizer *tokenizer)
{
	if (tokenizer->state == NoQuote)
		return (tokenize_noquote(tokenizer));
	if (tokenizer->state == Quote)
		return (tokenize_quote(tokenizer));
	if (tokenizer->state == SingleQuote)
		return (tokenize_single_quote(tokenizer));
	return (0);
}
