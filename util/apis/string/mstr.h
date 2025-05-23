/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mstr.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:15:05 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 16:42:47 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MSTR_H
# define MSTR_H

# include "types/string/t_str.h"
# include "types/string/t_mstr.h"
# include "types/string/t_vstr.h"

t_mstr USE
build_mstr(char *buff, t_size buff_len);

t_mstr USE
build_submstr(char *buff, t_size buff_len, t_isize offs, t_size len);

t_mstr USE
mstr_mstr(t_mstr str, t_isize offs, t_size len);

void
mstr_ncopy_vstr(t_mstr dst, t_vstr src, t_size n);

void
mstr_shift(t_mstr str, t_isize offs);

t_mstr USE
mstr_trail(t_mstr str);

void
debug_mstr(t_mstr str);

#endif