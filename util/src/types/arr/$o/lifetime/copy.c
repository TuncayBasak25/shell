/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:35:00 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/20 16:21:13 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arr/arr_$o.h"
#include "$o.h"

t_result
copy_arr_$o(t_arr_$o *dst, const t_arr_$o *src)
{
	t_size	i;

	if (dst->len != src->len)
	{
		drop_arr_$o(dst);
		*dst = clone_arr_$o(src);
		if (dst->len != src->len)
			return (FAIL);
		return (OK);
	}
	i = -1;
	while (++i < dst->len)
		copy_$o(&dst->buff[i], &src->buff[i]);
	return (OK);
}
