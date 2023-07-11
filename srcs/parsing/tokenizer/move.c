/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:54:50 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:54:50 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tokenizer.h"

int	tokenizer_move_cursor_two(t_tokenizer *tokenizer)
{
	tokenizer_move_cursor(tokenizer);
	tokenizer_move_cursor(tokenizer);
	return (0);
}

int	tokenizer_move_cursor(t_tokenizer *tokenizer)
{
	(tokenizer->cmd_ptr)++;
	(tokenizer->cmd_i)++;
	return (0);
}

int	tokenizer_move_accumulator(t_tokenizer *tokenizer)
{
	acc_move(tokenizer->acc);
	return (0);
}
