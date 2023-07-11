/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:36:33 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:36:33 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXPORT_H
# define EXPORT_H

# include "../../../libft/includes/libft.h"
# include "../../parsing/utils/utils.h"
# include "../../glob/glob.h"
# include "../../error.h"

int		builtin_export(char **args_table);
void	export_arg_free(t_export_arg export_arg);
void	export_arg_print(t_export_arg export_arg);
int		export_parse_arg(char *arg, t_export_arg *export_arg);
void	export_print(void);

#endif
