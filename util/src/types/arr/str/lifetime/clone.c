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

#include "arr/arr_str.h"
#include "str.h"

t_arr_str USE
clone_arr_str(const t_arr_str *src)
{
	t_arr_str	copy;
	t_size	i;

	copy = new_arr_str(src->len);
	i = -1;
	while (++i < copy.len)
		copy.buff[i] = clone_str(&src->buff[i]);
	return (copy);
}
