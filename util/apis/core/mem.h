/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 01:35:50 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 01:46:24 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"

t_bool USE
mem_eq(const void *a, const void *b, t_size byte_count);

void
mem_copy(void *dst, const void *src, t_size byte_count);

void
*mem_alloc(t_size size);

void
*mem_buff_alloc(t_size item_count, t_size item_size);

void
mem_free(void *ptr);
