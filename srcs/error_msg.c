/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:56:21 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:56:22 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"

void	write_to_stderr(char *str)
{
	int	size;

	size = ft_strlen(str);
	write(2, str, size);
}

int	error_msg3(char *msg, int err)
{
	char	*tmp;
	char	*final_message;

	tmp = ft_strjoin("minishell: ", msg);
	final_message = ft_strjoin(tmp, "\n");
	free(tmp);
	write_to_stderr(final_message);
	free(final_message);
	return (err);
}

int	error_msg(char *cmd, char *issue, int err)
{
	char	*tmp;
	char	*final_message;

	tmp = ft_strjoin("minishell: ", cmd);
	final_message = ft_strjoin(tmp, ": ");
	free(tmp);
	tmp = ft_strjoin(final_message, issue);
	free(final_message);
	final_message = ft_strjoin(tmp, "\n");
	free(tmp);
	write_to_stderr(final_message);
	free(final_message);
	return (err);
}

int	error_msg2(char *cmd, char *cmd2, char *issue, int err)
{
	char	*tmp;
	char	*final_message;

	tmp = ft_strjoin("minishell: ", cmd);
	final_message = ft_strjoin(tmp, ": ");
	free(tmp);
	tmp = ft_strjoin(final_message, cmd2);
	free(final_message);
	final_message = ft_strjoin(tmp, ": ");
	free(tmp);
	tmp = ft_strjoin(final_message, issue);
	free(final_message);
	final_message = ft_strjoin(tmp, "\n");
	free(tmp);
	write_to_stderr(final_message);
	free(final_message);
	return (err);
}

int	set_errnum(int *error, int error_value, int return_value)
{
	*error = error_value;
	return (return_value);
}
