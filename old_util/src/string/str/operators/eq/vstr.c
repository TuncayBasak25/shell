/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 01:13:34 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 01:48:12 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "core/mem.h"

t_bool USE
str_eq_vstr(const t_str *self, t_vstr vstr)
{
	if (self->len != vstr.len)
		return (FALSE);
	return (mem_eq(self->buff, vstr.buff, self->len));
}
