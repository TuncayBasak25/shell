/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 07:33:35 by rel-hass          #+#    #+#             */
/*   Updated: 2025/05/23 16:14:08 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "util.h"

typedef struct s_shell
{
	t_map_str	env;
	t_str		input;
	t_dstr		prompt_message;
	t_fd		heredoc_fd;
}				t_shell;

void
env_map_init(t_shell *shell, t_carr_cstr envp);

void
prompt(t_shell *shell);

void
parse_input(t_shell *shell);

#endif
