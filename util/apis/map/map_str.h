/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_str.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:52:21 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 11:02:30 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_STR_H
# define MAP_STR_H

# include "types/map/t_map_str.h"
# include "types/string/t_vstr.h"

t_map_str USE
empty_map_str(void);

void
drop_map_str(t_map_str *self);

t_bool USE
map_str_has_key1(t_map_str *self, const t_str *key);

t_bool USE
map_str_has_key4(t_map_str *self, t_vstr key);

t_bool USE
map_str_has_value4(t_map_str *self, t_vstr value);

t_vstr USE
map_str_get44(const t_map_str *self, t_vstr key);

t_vstr USE
map_str_get34(const t_map_str *self, const t_cstr key);

void
map_str_set44(t_map_str *self, t_vstr key, t_vstr value);

t_str USE
map_str_remove41(t_map_str *self, t_vstr key);

void
map_str_delete4(t_map_str *self, t_vstr key);

void
debug_map_str(t_map_str *self);

#endif