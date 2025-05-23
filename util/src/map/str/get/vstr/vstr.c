/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:22:35 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 15:52:24 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

t_vstr USE
map_str_get44(const t_map_str *self, t_vstr key)
{
	t_size	i;

	i = -1;
	while (++i < self->keys.len)
		if (str_eq_vstr(&self->keys.buff[i], key))
			break ;
	if (i >= self->values.len)
		return (empty_vstr());
	return (vstr_from_str(&self->values.buff[i]));
}
