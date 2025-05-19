/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 00:50:09 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 02:28:52 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_vstr USE
cstr_subvstr(t_cstr src, t_isize offs, t_size len)
{
	t_size	src_len;
	t_size	abs_offs;

	src_len = cstr_len(src);
	abs_offs = umin(uabs(offs), src_len);
	src_len = umin(src_len - abs_offs, len);
	if (offs < 0)
		src = src + abs_offs;
	return (build_vstr(src, src_len));
}
