/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mstr.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:15:05 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/20 06:08:02 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MSTR_H
# define MSTR_H

# include "string/s_str.h"
# include "string/s_vstr.h"
# include "string/s_mstr.h"

t_mstr USE
build_mstr(char *buff, t_size buff_len);

t_mstr USE
build_submstr(char *buff, t_size buff_len, t_isize offs, t_size len);

t_vstr USE
mstr_vstr(t_mstr str, t_isize offs, t_size len);

t_mstr USE
mstr_mstr(t_mstr str, t_isize offs, t_size len);

void
mstr_copy_vstr(t_mstr dst, t_vstr src);

void
mstr_copy_mstr(t_mstr dst, t_mstr src);

void
mstr_shift(t_mstr str, t_isize offs);

#endif