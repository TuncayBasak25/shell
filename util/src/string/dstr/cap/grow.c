/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grow.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:23:39 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 15:54:50 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

t_result USE
dstr_grow(t_dstr *self, t_size new_cap)
{
	char	*new_buff;

	if (new_cap <= self->cap)
		return (OK);
	new_buff = mem_resize(self->buff, self->len, new_cap);
	if (!new_buff)
		return (FAIL);
	self->buff = new_buff;
	self->cap = new_cap;
	return (OK);
}
