/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstr_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 00:48:23 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 22:49:08 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"

t_size USE
cstr_len(const t_cstr cstr)
{
	t_size	len;

	if (!cstr)
		return (0);
	len = 0;
	while (cstr[len])
		len++;
	return (len);
}
