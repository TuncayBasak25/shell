/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 06:09:10 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/20 06:24:37 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "mem.h"
#include "math.h"

void
mstr_copy_vstr(t_mstr dst, t_vstr src)
{
	mem_copy(dst.buff, src.buff, umin(dst.len, src.len));
}
