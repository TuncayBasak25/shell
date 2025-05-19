/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 01:57:32 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 02:17:34 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map/map_str.h"
#include "string.h"
#include "array/str/darr_str.h"

t_result
map_vstr_set(t_map_str *self, t_vstr key, t_vstr value)
{
	t_size	i;

	if (key.len == 0 || value.len == 0)
		return (FAIL);
	i = -1;
	while (++i < self->keys.len)
		if (str_eq_vstr(&self->keys.buff[i], key))
			break ;
	if (i < self->keys.len)
		return (str_copy_vstr(&self->values.buff[i], value));
	if (darr_str_push(&self->keys, key, -1) == FAIL)
		return (FAIL);
	if (darr_str_push(&self->values, value, -1) == OK)
		return (OK);
	darr_str_drop(&self->keys, -1);
	return (FAIL);
}
