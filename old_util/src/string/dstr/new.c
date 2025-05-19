/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:29:25 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 10:36:00 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_dstr USE
new_dstr(t_cstr cstr)
{
	t_size	len;
	t_dstr	self;

	len = cstr_len(cstr);
	self = reserve_dstr(len);
	if (self.cap < len)
		return (self);
	self.len = len;
	dstr_copy_cstr(&self, cstr);
	return (self);
}
