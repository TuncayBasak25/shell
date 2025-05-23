/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:15:05 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 16:18:35 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include "types/string/t_str.h"
# include "types/string/t_dstr.h"
# include "types/string/t_mstr.h"
# include "types/string/t_vstr.h"

t_str USE
new_str(t_cstr cstr);

t_str USE
new_str_len(t_size len, char c);

t_str USE
build_str(char *buff, t_size len);

t_str USE
empty_str(void);

void
drop_str(t_str *str);

t_str USE
str_from_dstr(t_dstr *src);

t_str USE
str_from_cstr(t_cstr *src);

t_str USE
str_from_vstr(t_vstr src);

t_dstr USE
str_as_dstr(t_str *src);

t_vstr USE
str_vstr(const t_str *self, t_isize offs, t_size len);

t_mstr USE
str_mstr(t_str *self, t_isize offs, t_size len);

t_bool USE
str_eq_vstr(const t_str *self, t_vstr vstr);

void
str_copy_vstr(t_str *dst, t_vstr src);

void
str_copy_dstr(t_str *dst, const t_dstr *src);

void
str_rebuild_vstr(t_str *self, t_vstr src);

void
debug_str(const t_str *self);

#endif