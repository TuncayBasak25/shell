/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:15:05 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 15:30:40 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DSTR_H
# define DSTR_H

# include "types/string/t_dstr.h"
# include "types/string/t_mstr.h"
# include "types/string/t_vstr.h"

t_dstr USE
new_dstr(t_cstr cstr);

t_dstr USE
reserve_dstr(t_size cap);

t_dstr USE
empty_dstr(void);

t_str USE
dstr_as_str(t_dstr *src);

void
dstr_insert(t_dstr *self, t_size i, char c);

void
dstr_insert4(t_dstr *self, t_size i, t_vstr str);

void
dstr_push_back(t_dstr *self, char c);

void
dstr_push_back3(t_dstr *self, t_cstr str);

void
dstr_push_back4(t_dstr *self, t_vstr str);

void
dstr_copy_vstr(t_dstr *dst, t_vstr src);

void
dstr_copy_cstr(t_dstr *dst, t_cstr src);

t_result USE
dstr_grow(t_dstr *self, t_size min_cap);

t_result USE
dstr_extend(t_dstr *self, t_size need);

t_mstr USE
dstr_mstr(t_dstr *self, t_isize offs, t_size len);

t_mstr USE
dstr_buff_mstr(t_dstr *self, t_isize offs, t_size len);

#endif