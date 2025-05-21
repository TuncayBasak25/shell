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

#include "arr/arr_str.h"
#include "str.h"

t_result
copy_arr_str(t_arr_str *dst, const t_arr_str *src)
{
	t_size	i;

	if (dst->len != src->len)
	{
		drop_arr_str(dst);
		*dst = clone_arr_str(src);
		if (dst->len != src->len)
			return (FAIL);
		return (OK);
	}
	i = -1;
	while (++i < dst->len)
		copy_str(&dst->buff[i], &src->buff[i]);
	return (OK);
}
