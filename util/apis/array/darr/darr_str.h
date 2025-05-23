/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darr_str.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:49:26 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 12:27:33 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DARR_STR_H
# define DARR_STR_H

# include "types/array/darr/t_darr_str.h"
# include "types/string/t_vstr.h"

t_darr_str USE
empty_darr_str(void);

void
drop_darr_str(t_darr_str *self);

t_result USE
darr_str_grow(t_darr_str *self, t_size new_cap);

t_result USE
darr_str_extend(t_darr_str *self, t_size need);

void
darr_str_insert4(t_darr_str *self, t_size i, t_vstr str);

void
darr_str_push_back4(t_darr_str *self, t_vstr str);

void
darr_str_replace4(t_darr_str *self, t_size index, t_vstr new_value);

void
darr_str_drop(t_darr_str *self, t_size index);

#endif