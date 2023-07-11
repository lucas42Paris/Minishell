/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:55:20 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:55:20 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "token.h"

t_token	*token_alloc(void)
{
	t_token	*token;

	token = (t_token *)malloc(sizeof(t_token));
	return (token);
}

void	token_dispose(t_token *token)
{
	free(token->str);
}

void	token_free(t_token *token)
{
	free(token);
}

void	token_destroy(void *token)
{
	token_dispose((t_token *)token);
	token_free((t_token *)token);
}
