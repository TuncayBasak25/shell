/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eq.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:32:41 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 11:39:18 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

t_bool USE
mem_eq(const void *a, const void *b, t_size size)
{
	t_u8	*a_u8;
	t_u8	*b_u8;

	if (!size)
		return (TRUE);
	if (!a || !b)
		return (FALSE);
	a_u8 = (t_u8 *)a;
	b_u8 = (t_u8 *)b;
	while (size--)
		if (*a_u8++ != *b_u8++)
			return (FALSE);
	return (TRUE);
}
