/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:16:14 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 11:18:05 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

t_str USE
str_from_vstr(t_vstr src)
{
	char	*buff;
	t_size	len;

	buff = mem_clone(src.buff, src.len);
	if (buff)
		len = src.len;
	else
		len = 0;
	return (build_str(buff, len));
}
