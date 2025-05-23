/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:51:22 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 11:53:38 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

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
