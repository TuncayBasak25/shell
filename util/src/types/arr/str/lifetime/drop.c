/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:35:00 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/20 15:49:43 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arr/arr_str.h"
#include "str.h"
#include "mem.h"

void
drop_arr_str(t_arr_str *self)
{
	t_size	i;

	i = -1;
	while (++i < self->len)
		drop_str(&self->buff[i]);
	mem_free(self->buff);
	self->buff = 0;
	self->len = 0;
}
