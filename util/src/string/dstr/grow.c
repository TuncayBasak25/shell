/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grow.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:51:09 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 10:27:47 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "core/mem.h"

t_result
dstr_grow(t_dstr *self, t_size min_cap)
{
	char	*new_buff;

	if (min_cap <= self->cap)
		return (OK);
	new_buff = buff_realloc(self->buff, min_cap, self->len, sizeof(char));
	if (!new_buff)
		return (FAIL);
	self->buff = new_buff;
	self->cap = min_cap;
	return (OK);
}
