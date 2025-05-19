/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:36:28 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 11:20:38 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_result
dstr_push_char(t_dstr *self, char c, t_size index)
{
	t_mstr	tail;

	if (dstr_extend(self, 1) == FAIL)
		return (FAIL);
	index = umin(index, self->len);
	self->len++;
	tail = dstr_mstr(self, index, self->len - index);
	mstr_shift(tail, 1);
	tail.buff[0] = c;
	return (OK);
}
