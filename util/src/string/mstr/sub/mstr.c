/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 00:50:09 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 16:30:13 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

t_mstr USE
mstr_mstr(t_mstr str, t_isize offs, t_size len)
{
	return (build_submstr(str.buff, str.len, offs, len));
}
