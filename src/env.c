/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 19:47:50 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 12:02:15 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map/map_str.h"
#include "string.h"

static void
add_entry(t_map_str *map, t_vstr entry)
{
	t_vstr	key;
	t_vstr	value;
	t_size	index_of_eq;

	index_of_eq = vstr_index_of(entry, '=');
	if (index_of_eq == 0 || index_of_eq >= entry.len - 1)
		return (error_log("Env initialization, no '=' inside entry!"));
	key = vstr_vstr(entry, 0, index_of_eq);
	value = vstr_vstr(entry, index_of_eq + 1, MAX_LEN);
	map_vstr_set(map, key, value);
}

t_map_str	USE
env_map_init(t_carr_cstr envp)
{
	t_map_str	map;
	t_vstr		entry;
	t_size		i;

	map = new_map_str();
	i = -1;
	while (envp[++i])
	{
		entry = cstr_vstr(envp[i], 0, MAX_LEN);
		add_entry(&map, entry);
	}
	return (map);
}
