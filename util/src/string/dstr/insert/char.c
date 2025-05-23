/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:26:00 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 15:29:21 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void
dstr_insert(t_dstr *self, t_size i, char c)
{
	if (dstr_extend(self, 1) == FAIL)
		return ;
	if (i > self->len)
		i = self->len;
	self->len++;
	mem_shift(&self->buff[i], self->len - i, 1);
	self->buff[i] = c;
}
