/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:08:41 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 16:06:01 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "colors.h"
#include <readline/readline.h>
#include <readline/history.h>
#include <signal.h>
#include <unistd.h>

static t_vstr USE
get_host(t_map_str *map)
{
	t_vstr	manager;

	manager = map_str_get34(map, "SESSION_MANAGER");
	manager = vstr_vstr_between(manager, '/', ':');
	return (vstr_vstr(manager, 1, -1));
}

static void
build_prompt(t_shell *shell)
{
	t_dstr	*msg;

	msg = &shell->prompt_message;
	shell->prompt_message.len = 0;
	dstr_push_back3(msg, BGREEN);
	dstr_push_back4(msg, map_str_get34(&shell->env, "USER"));
	dstr_push_back(msg, '@');
	dstr_push_back4(msg, get_host(&shell->env));
	dstr_push_back3(msg, RESET ":" BBLUE "~");
	dstr_push_back4(msg, map_str_get34(&shell->env, "HOME"));
	dstr_push_back3(msg, RESET "$");
	dstr_push_back(msg, '\0');
}

static void
control_c_handler(int sigid)
{
	(void)sigid;
	write(1, "\n", 1);
	rl_on_new_line();
	rl_replace_line("", 0);
	rl_redisplay();
}

void
prompt(t_shell *shell)
{
	t_cstr	result;

	build_prompt(shell);
	signal(SIGINT, control_c_handler);
	result = readline(shell->prompt_message.buff);
	add_history(result);
	signal(SIGINT, SIG_IGN);
	shell->input = cstr_as_str(result);
}
