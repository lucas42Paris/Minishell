/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:35:16 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:35:16 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CD_H
# define CD_H

# include <stdio.h>
# include "../../parsing/utils/utils.h"
# include <sys/stat.h>
# include "../../glob/glob.h"
# include "../../error.h"
# include <errno.h>

# define PATH_MAX 4096

int	cd(char **args_table);

#endif
