/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:37:04 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 12:45:20 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void USE
*mem_resize(void *buff, t_size buffer_size, t_size new_size)
{
	void	*new_buff;

	new_buff = mem_alloc(new_size);
	if (buff && new_buff)
	{
		mem_copy(new_buff, buff, umin(buffer_size, new_size));
		mem_free(buff);
	}
	return (new_buff);
}
