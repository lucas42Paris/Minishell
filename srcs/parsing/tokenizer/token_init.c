/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:55:05 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:55:05 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "token.h"

int	token_init_str(t_token *token, char *str, int index, char c)
{
	char	*dst;

	token->type = Str;
	token->str = NULL;
	dst = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dst)
		return (1);
	str_cpy(str, dst);
	token->str = dst;
	token->current_index = index;
	token->current_char = c;
	return (0);
}

int	token_init_eol(t_token *token, int index, char c)
{
	token->type = Eol;
	token->str = NULL;
	token->current_index = index;
	token->current_char = c;
	return (0);
}

int	token_init_pipe(t_token *token, int index, char c)
{
	token->type = Pipe;
	token->str = NULL;
	token->current_index = index;
	token->current_char = c;
	return (0);
}

int	token_init_out(t_token *token, int index, char c)
{
	token->type = Out;
	token->str = NULL;
	token->current_index = index;
	token->current_char = c;
	return (0);
}

int	token_init_outa(t_token *token, int index, char c)
{
	token->type = Outa;
	token->str = NULL;
	token->current_index = index;
	token->current_char = c;
	return (0);
}
