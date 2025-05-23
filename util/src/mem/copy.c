/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:24:47 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 12:15:31 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void
mem_copy(void *dst, const void *src, t_size size)
{
	t_u8	*d;
	t_u8	*s;

	if (!dst || !src || !size)
		return ;
	d = (t_u8 *)dst;
	s = (t_u8 *)src;
	if (d < s || d >= s + size)
	{
		while (size--)
			*d++ = *s++;
	}
	else
	{
		while (size--)
			d[size] = s[size];
	}
}
