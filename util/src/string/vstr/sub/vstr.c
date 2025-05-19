/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 00:50:09 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 00:57:52 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_vstr USE
vstr_subvstr(t_vstr str, t_isize offs, t_size len)
{
	t_size	abs_offs;

	abs_offs = umin(uabs(offs), str.len);
	str.len = umin(str.len - abs_offs, len);
	if (offs < 0)
		str.buff = str.buff + abs_offs;
	return (str);
}
