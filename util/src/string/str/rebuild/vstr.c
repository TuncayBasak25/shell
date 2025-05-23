/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 13:04:09 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 13:13:11 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void
str_rebuild_vstr(t_str *self, t_vstr src)
{
	if (self->len == src.len)
		return (str_copy_vstr(self, src));
	drop_str(self);
	*self = str_from_vstr(src);
}
