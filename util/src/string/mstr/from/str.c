/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:42:50 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 16:21:01 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

t_mstr USE
mstr_from_str(t_str *src)
{
	return (build_mstr(src->buff, src->len));
}
