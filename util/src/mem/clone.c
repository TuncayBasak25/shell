/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clone.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:18:37 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 12:41:17 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void USE
*mem_clone(const void *src, t_size size)
{
	void	*buff;

	buff = mem_alloc(size);
	mem_copy(buff, src, size);
	return (buff);
}
