/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_str.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:52:21 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 22:09:45 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_STR_H
# define MAP_STR_H

# include "map/s_map_str.h"
# include "string/s_vstr.h"

t_map_str USE
new_map_str(void);

void
drop_map_str(t_map_str *self);

t_bool USE
map_vstr_has_key(t_map_str *self, t_vstr key);

t_bool USE
map_vstr_has_value(t_map_str *self, t_vstr value);

t_vstr USE
map_vstr_get(const t_map_str *self, t_vstr key);

t_vstr USE
map_cstr_get(const t_map_str *self, const t_cstr key);

t_result
map_vstr_set(t_map_str *self, t_vstr key, t_vstr value);

t_str USE
map_vstr_remove_as_str(t_map_str *self, t_vstr key);

void
map_vstr_delete(t_map_str *self, t_vstr key);

void
debug_map_str(t_map_str *self);

#endif