/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eq.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 01:16:53 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 01:26:34 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"

t_bool USE
mem_eq(const void *a, const void *b, t_size byte_count)
{
	const t_u8	*ma;
	const t_u8	*mb;
	t_size		i;

	if (byte_count > 0 && (!a || !b))
	{
		error_log("Mem eq called with size > 0 but null ptr!");
		return (FALSE);
	}
	ma = (const t_u8 *)a;
	mb = (const t_u8 *)b;
	i = -1;
	while (++i < byte_count)
		if (ma[i] != mb[i])
			return (FALSE);
	return (TRUE);
}
