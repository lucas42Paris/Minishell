/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executables.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:39:37 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:39:37 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXECUTABLES_H
# define EXECUTABLES_H

# include "../../parsing/parsing.h"
# include "../executable/executable.h"

typedef t_list	*t_executables;

int				executables_init(t_execution *execution, t_commands *cmds);
t_executables	*executables_alloc(void);
void			executables_destroy(t_executables *executables);
void			executables_print(t_executables *executables);
t_executable	*executables_get_i(t_executables *executables, int index);

#endif
