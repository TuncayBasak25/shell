/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:15:05 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 15:59:33 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VSTR_H
# define VSTR_H

# include "types/string/t_str.h"
# include "types/string/t_vstr.h"
# include "types/string/t_mstr.h"

t_vstr USE
empty_vstr(void);

t_vstr USE
build_vstr(const char *buff, t_size len);

t_vstr USE
build_subvstr(const char *buff, t_size buff_len, t_isize offs, t_size len);

t_vstr USE
vstr_from_cstr(const t_cstr src);

t_vstr USE
vstr_from_str(const t_str *src);

t_size USE
vstr_index_of(t_vstr str, char c);

t_vstr USE
vstr_vstr(t_vstr str, t_isize offs, t_size len);

t_vstr USE
vstr_chop_until(t_vstr str, char c);

t_vstr USE
vstr_chop_after(t_vstr str, char c);

t_vstr USE
vstr_vstr_between(t_vstr str, char start, char end);

void
debug_vstr(t_vstr str);

#endif