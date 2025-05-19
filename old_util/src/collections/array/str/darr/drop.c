/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 01:30:48 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 01:47:18 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array/str/darr_str.h"
#include "string.h"
#include "core/mem.h"

void
drop_darr_str(t_darr_str *self)
{
	t_size	i;

	i = -1;
	while (++i < self->len)
		drop_str(&self->buff[i]);
	mem_free(self->buff);
	*self = new_darr_str();
}
