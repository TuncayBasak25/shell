/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:15:05 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 12:04:01 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include "string/s_str.h"
# include "string/s_dstr.h"
# include "string/s_mstr.h"

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
str_from_dstr(t_dstr *dstr);

t_str USE
str_from_cstr(t_cstr *cstr);

t_vstr USE
str_vstr(const t_str *self, t_isize offs, t_size len);

t_bool USE
str_eq_vstr(const t_str *self, t_vstr vstr);

t_result
str_copy_vstr(t_str *dst, t_vstr src);

t_result
str_copy_dstr(t_str *dst, const t_dstr *src);

#endif