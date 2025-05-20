/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:36:28 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 11:20:49 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_result
dstr_push_vstr(t_dstr *self, t_vstr str, t_size index)
{
	t_mstr	tail;

	if (dstr_extend(self, str.len) == FAIL)
		return (FAIL);
	index = umin(index, self->len);
	self->len += str.len;
	tail = dstr_mstr(self, index, self->len - index);
	mstr_shift(tail, str.len);
	mstr_copy_vstr(tail, str);
	return (OK);
}
