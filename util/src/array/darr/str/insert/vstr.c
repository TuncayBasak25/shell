/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:03:31 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 11:58:45 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void
darr_str_insert4(t_darr_str *self, t_size i, t_vstr value)
{
	if (darr_str_extend(self, 1) == FAIL)
		return ;
	if (i > self->len)
		i = self->len;
	self->len++;
	mem_shift(&self->buff[i], (self->len - i) * sizeof(t_str), sizeof(t_str));
	self->buff[i] = str_from_vstr(value);
}
