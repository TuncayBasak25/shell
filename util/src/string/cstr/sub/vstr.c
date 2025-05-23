/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:44:20 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 11:46:42 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

t_vstr USE
cstr_vstr(const t_cstr src, t_isize offs, t_size len)
{
	return (build_subvstr(src, cstr_len(src), offs, len));
}
