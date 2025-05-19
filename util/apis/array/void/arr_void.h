/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_void.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:33:12 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 13:24:54 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARR_VOID_H
# define ARR_VOID_H

# include "array/void/s_arr_void.h"
# include "array/void/s_marr_void.h"

t_arr_void USE
new_arr_void(t_size len, t_size item_size);

t_arr_void USE
build_arr_void(void *buff, t_size len, t_size item_size);

void
drop_array_void(t_arr_void *self);

void
drop_array_void_owned(t_arr_void *self, void (*drop)(void *item));

t_marr_void USE
arr_void_marr(t_arr_void *self, t_isize offs, t_size len);

#endif