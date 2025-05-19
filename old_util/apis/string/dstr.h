/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:15:05 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 10:52:03 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DSTR_H
# define DSTR_H

# include "string/s_dstr.h"
# include "string/s_mstr.h"

t_dstr USE
new_dstr(t_cstr cstr);

t_dstr USE
reserve_dstr(t_size cap);

t_dstr USE
empty_dstr(void);

t_result
dstr_push_char(t_dstr *self, char c, t_size index);

t_result
dstr_push_vstr(t_dstr *self, t_vstr str, t_size index);

t_result
dstr_copy_vstr(t_dstr *dst, t_vstr src);

t_result
dstr_copy_cstr(t_dstr *dst, t_cstr src);

t_result
dstr_grow(t_dstr *self, t_size min_cap);

t_result USE
dstr_extend(t_dstr *self, t_size need);

t_mstr USE
dstr_mstr(t_dstr *self, t_isize offs, t_size len);

t_mstr USE
dstr_buff_mstr(t_dstr *self, t_isize offs, t_size len);

#endif