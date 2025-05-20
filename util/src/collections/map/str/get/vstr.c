/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 01:00:11 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/20 06:32:50 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map/map_str.h"
#include "string.h"

t_vstr USE
map_vstr_get(const t_map_str *self, t_vstr key)
{
	t_size	index;

	index = -1;
	while (++index < self->keys.len)
	{
		if (str_eq_vstr(&self->keys.buff[index], key))
			break ;
	}
	if (index == self->keys.len)
		return (empty_vstr());
	return (str_vstr(&self->values.buff[index], 0, -1));
}
