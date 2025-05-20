/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:35:00 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/20 15:41:11 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arr/arr_$o.h"
#include "mem.h"

t_arr_$o USE
new_arr_$o(t_size len)
{
	t_$o	*buff;

	buff = (t_$o *)mem_alloc(sizeof(t_$o) * len);
	if (buff == 0)
		return (empty_arr_$o());
	return (build_arr_$o(buff, len));
}
