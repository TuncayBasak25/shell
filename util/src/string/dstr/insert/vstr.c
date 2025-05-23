/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:26:00 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 15:35:43 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void
dstr_insert4(t_dstr *self, t_size i, t_vstr str)
{
	if (dstr_extend(self, str.len) == FAIL)
		return ;
	if (i > self->len)
		i = self->len;
	self->len += str.len;
	mem_shift(&self->buff[i], self->len - i, str.len);
	mem_copy(&self->buff[i], str.buff, str.len);
}
