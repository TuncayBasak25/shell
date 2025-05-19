/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:48:03 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 01:40:03 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <readline/readline.h>
#include <unistd.h>
#include <fcntl.h>

#include "colors.h"
#include "string.h"
#include "map/map_str.h"

static t_cstr USE
build_prompt(const t_map_str *env)
{
	t_dstr	prompt;

	prompt = new_dstr(BGREEN);
	dstr_append(&prompt, map_cstr_get(env, "USER"));
	dstr_push_back(&prompt, '@');
	dstr_append(&prompt, map_cstr_get(env, "HOME"));
	return (cstr_from_dstr(prompt));
}

int	g_sig = 0;

t_str USE
prompt(const t_map_str *env)
{
	t_cstr	prompt_message;
	t_cstr	line;
	t_i32	save_stdin;

	save_stdin = dup(0);
	if (save_stdin == -1)
		return (empty_str());
	prompt_message = build_prompt(env);
	line = readline(prompt_message);
	drop_cstr(&prompt_message);
	if (g_sig)
		dup2(save_stdin, 0);
	close(save_stdin);
	return (str_from_cstr(line));
}