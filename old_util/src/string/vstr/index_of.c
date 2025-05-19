/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_of.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 01:55:07 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 01:57:02 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_size USE
vstr_index_of(t_vstr str, char c)
{
	t_size	i;

	i = -1;
	while (++i < str.len)
		if (str.buff[i] == c)
			break ;
	return (i);
}
