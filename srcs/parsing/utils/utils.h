/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:55:58 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:55:59 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "../../../libft/includes/libft.h"

void	str_clean(char *str, int len);
int		str_cpy(char *str, char *dst);
int		str_cat(char *str, char *dst);
void	table_print(char **table);
int		table_get_size(char **table);
void	table_free(char **table);
int		str_are_equal(char *str1, char *str2);
int		str_store(char **dst, char *src, int start, int end);
int		table_init(char ***table);
int		table_add_line(char ***table, char *content);
void	mem_clean(char *ptr, int mem_size);

#endif
