/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 07:07:19 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 12:43:56 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

# include "apis/core.h"

void USE
*mem_alloc(t_size size);

void USE
*mem_resize(void *src, t_size buffer_size, t_size new_size);

void USE
*mem_clone(const void *src, t_size size);

void
mem_free(void *ptr);

t_bool USE
mem_eq(const void *a, const void *b, t_size size);

void
mem_copy(void *dst, const void *src, t_size size);

void
mem_set(void *buff, t_size buff_size, t_u8 byte);

void
mem_shift(void *buff, t_size buff_size, t_isize offs_size);

#endif