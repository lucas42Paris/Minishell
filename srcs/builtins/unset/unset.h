/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:37:39 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:37:39 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNSET_H
# define UNSET_H

# include "../../../libft/includes/libft.h"
# include <stdbool.h>
# include "../../parsing/utils/utils.h"
# include "../../glob/glob.h"

int		unset(char **args);
int		get_env_var_index(char **env, char *var);
int		env_var_nbr(char **env);
bool	is_valid_env_var(char *var);
bool	remove_env_var(char **env, int index);

#endif
