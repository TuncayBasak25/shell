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

#include "arr/arr_str.h"
#include "mem.h"

t_arr_str USE
new_arr_str(t_size len)
{
	t_str	*buff;

	buff = (t_str *)mem_alloc(sizeof(t_str) * len);
	if (buff == 0)
		return (empty_arr_str());
	return (build_arr_str(buff, len));
}
