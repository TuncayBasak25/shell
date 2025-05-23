/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 19:47:50 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 14:32:40 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include <stdio.h>

static void
add_entry(t_map_str *map, t_vstr entry)
{
	t_vstr	key;
	t_vstr	value;
	t_size	index_of_eq;

	index_of_eq = vstr_index_of(entry, '=');
	if (index_of_eq == 0)
		return ;
	key = vstr_vstr(entry, 0, index_of_eq);
	value = vstr_vstr(entry, index_of_eq + 1, -1);
	map_str_set44(map, key, value);
}

void
env_map_init(t_shell *shell, t_carr_cstr envp)
{
	t_vstr		entry;
	t_size		i;

	shell->env = empty_map_str();
	i = -1;
	while (envp[++i])
	{
		entry = cstr_vstr(envp[i], 0, -1);
		add_entry(&shell->env, entry);
	}
}
