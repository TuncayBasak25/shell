/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grow.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:23:39 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 12:45:43 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

t_result USE
darr_str_grow(t_darr_str *self, t_size new_cap)
{
	t_str	*new_buff;

	if (new_cap <= self->cap)
		return (OK);
	new_buff = mem_resize(self->buff, self->len * sizeof(t_str), new_cap * sizeof(t_str));
	if (!new_buff)
		return (FAIL);
	self->buff = new_buff;
	self->cap = new_cap;
	return (OK);
}
