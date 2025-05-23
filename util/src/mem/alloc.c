/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:22:35 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 12:41:20 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"
#include <stdlib.h>

void USE
*mem_alloc(t_size size)
{
	void	*buff;

	buff = malloc(size);
	mem_set(buff, size, 0);
	return (buff);
}
