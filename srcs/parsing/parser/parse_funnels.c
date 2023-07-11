/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_funnels.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:53:10 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:53:11 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

int	parse_out(t_parser *parser)
{
	t_token		*token;

	token = parser_get_token(parser);
	if (!token)
		return (parser_set_error_return(parser, ParserUnknownError));
	if (token->type == Str)
	{
		command_add_out(parser->command, token->str);
		parser_move_cursor(parser);
		parser->state = pParams;
		return (0);
	}
	return (parser_set_error_return(parser, ParserSyntaxError));
}

int	parse_outa(t_parser *parser)
{
	t_token		*token;

	token = parser_get_token(parser);
	if (!token)
		return (parser_set_error_return(parser, ParserUnknownError));
	if (token->type == Str)
	{
		command_add_out_a(parser->command, token->str);
		parser_move_cursor(parser);
		parser->state = pParams;
		return (0);
	}
	return (parser_set_error_return(parser, ParserSyntaxError));
}

int	parse_in(t_parser *parser)
{
	t_token		*token;

	token = parser_get_token(parser);
	if (!token)
		return (parser_set_error_return(parser, ParserUnknownError));
	if (token->type == Str)
	{
		command_add_in(parser->command, token->str);
		parser_move_cursor(parser);
		parser->state = pParams;
		return (0);
	}
	return (parser_set_error_return(parser, ParserSyntaxError));
}

int	parse_ina(t_parser *parser)
{
	t_token		*token;

	token = parser_get_token(parser);
	if (!token)
		return (parser_set_error_return(parser, ParserUnknownError));
	if (token->type == Str)
	{
		command_add_in_a(parser->command, token->str);
		parser_move_cursor(parser);
		parser->state = pParams;
		return (0);
	}
	return (parser_set_error_return(parser, ParserSyntaxError));
}

int	parse_params_funnel(t_parser *parser, t_parser_state funnel_state)
{
	parser->state = funnel_state;
	parser_move_cursor(parser);
	return (0);
}
