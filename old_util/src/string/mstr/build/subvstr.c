/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subvstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:14:27 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 12:28:14 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_mstr USE
build_submstr(char *buff, t_size buff_len, t_isize offs, t_size len)
{
	t_size	abs_offs;

	abs_offs = umin(uabs(offs), buff_len);
	buff_len = umin(buff_len - abs_offs, len);
	if (offs < 0)
		buff = buff + abs_offs;
	return (build_mstr(buff, buff_len));
}
