/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:37:13 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 22:02:30 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PWD_H
# define PWD_H

# include "../../../libft/includes/libft.h"
# include "../../glob/glob.h"
# define PATH_MAX 4096

int	pwd_builtin(char **args);

#endif
