/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell_struct.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:57:08 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 21:57:09 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_STRUCT_H
# define MINISHELL_STRUCT_H

# include <stdio.h>
# include <termios.h>
# include <term.h>
# include <curses.h>
# include <signal.h>
# include <readline/readline.h>
# include <readline/history.h>
# include "glob/glob.h"
# include "../libft/includes/libft.h"

# define BASE_TERMINAL 0
# define MINISHELL_TERMINAL 1
# define HEREDOC_TERMINAL 2
# define HEREDOC_WAIT_TERMINAL 3
# define NO_KEY 0
# define CTRL_C 3

typedef struct s_minishell {
	struct termios	terminal[4];
	t_list			***env;
}	t_minishell;

void			minishell_destroy(t_minishell *minishell);
t_minishell		*minishell_alloc(void);
int				minishell_init(t_minishell *minishell, char **envp);
t_list			**minishell_get_env(t_minishell *minishell);
struct termios	*minishell_get_terminal(t_minishell *minishell, int term_index);
void			minishell_set_terminal(t_minishell *minishell, int term_index);
void			exec_signal_ctrl_slash(int signum);
void			exec_signal_ctrl_c(int signum);
void			minishell_signal_ctrl_c(int signum);
void			minishell_signal_ctrl_slash(int signum);
void			minishell_print(t_minishell *minishell, t_bool print_env);
void			heredoc_signal_ctrl_c(int signum);
int				minishell_terminals_init(t_minishell *minishell);

#endif
