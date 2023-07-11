/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:56:11 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:56:12 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "parser/parser.h"
# include "expander/expander.h"
# include "lstutils/lstutils.h"

t_parser	*parse_string(char *str, int last_err);
void		parser_destroy(t_parser *parser);
int			parser_get_error(t_parser *parser);
int			parser_get_error_char(t_parser *parser);
t_parser	*parse(char *str, int last_err);

#endif
