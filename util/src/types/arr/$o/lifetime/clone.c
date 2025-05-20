/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clone.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:35:00 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/20 15:53:38 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arr/arr_$o.h"
#include "$o.h"

t_arr_$o USE
clone_arr_$o(const t_arr_$o *src)
{
	t_arr_$o	copy;
	t_size	i;

	copy = new_arr_$o(src->len);
	i = -1;
	while (++i < copy.len)
		copy.buff[i] = clone_$o(&src->buff[i]);
	return (copy);
}
