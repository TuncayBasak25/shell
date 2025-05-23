/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 00:50:09 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 16:30:30 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

t_vstr USE
vstr_vstr(t_vstr str, t_isize offs, t_size len)
{
	return (build_subvstr(str.buff, str.len, offs, len));
}
