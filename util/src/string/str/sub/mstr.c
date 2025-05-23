/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 13:43:59 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 16:19:34 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

t_mstr USE
str_mstr(t_str *src, t_isize offs, t_size len)
{
	return (build_submstr(src->buff, src->len, offs, len));
}
