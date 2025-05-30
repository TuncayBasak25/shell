/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstr.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:15:05 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 15:14:43 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CSTR_H
# define CSTR_H

# include "types/string/t_dstr.h"
# include "types/string/t_mstr.h"

t_cstr USE
cstr_from_dstr(t_dstr dstr);

void
drop_cstr(t_cstr cstr);

t_size USE
cstr_len(const t_cstr cstr);

t_vstr USE
cstr_vstr(const t_cstr cstr, t_isize offset, t_size len);

t_str USE
cstr_as_str(t_cstr str);

#endif