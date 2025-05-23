/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:47:26 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 13:17:19 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void
darr_str_replace4(t_darr_str *self, t_size i, t_vstr new_value)
{
	if (i < self->len)
		str_rebuild_vstr(&self->buff[i], new_value);
}
