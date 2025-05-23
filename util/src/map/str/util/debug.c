/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:45:23 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 13:43:48 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"
#include <stdio.h>

void
debug_map_str(t_map_str *self)
{
	t_size	i;
	t_vstr	key;
	t_vstr	val;

	if (self->keys.len != self->values.len)
	{
		printf("debug_map_str: key_len != values_len!\n");
		return ;
	}
	printf("map_str\n{\n");
	i = -1;
	while (++i < self->keys.len)
	{
		key = str_vstr(&self->keys.buff[i], 0, -1);
		val = str_vstr(&self->values.buff[i], 0, -1);
		printf("\t%.*s : %.*s,\n", (int)key.len, key.buff, (int)val.len, val.buff);
	}
	printf("}\n");
}
