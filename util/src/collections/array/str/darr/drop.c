/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 01:30:48 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/20 06:30:11 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array/str/darr_str.h"
#include "string.h"
#include "mem.h"

void
drop_darr_str(t_darr_str *self)
{
	t_size	i;

	i = -1;
	while (++i < self->len)
		drop_str(&self->buff[i]);
	mem_free(self->buff);
	*self = empty_darr_str();
}
