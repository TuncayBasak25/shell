/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:57:13 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 12:23:00 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void
mem_shift(void *buff, t_size buff_size, t_isize offs)
{
	t_size	abs_offs;

	if (!buff || !offs)
		return ;
	abs_offs = uabs(offs);
	if (abs_offs >= buff_size)
		return ;
	if (offs > 0)
		mem_copy(buff + offs, buff, buff_size - abs_offs);
	else
		mem_copy(buff, buff + offs, buff_size - abs_offs);
}
