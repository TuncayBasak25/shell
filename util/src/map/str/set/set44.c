/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set44.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 01:57:32 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 10:59:50 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void
map_str_set44(t_map_str *self, t_vstr key, t_vstr value)
{
	t_size	i;

	i = -1;
	while (++i < self->keys.len)
		if (str_eq_vstr(&self->keys.buff[i], key))
			break ;
	if (i < self->values.len)
		darr_str_replace4(&self->values, i, value);
	else
	{
		darr_str_push_back4(&self->keys, key);
		darr_str_push_back4(&self->values, value);
	}
}
