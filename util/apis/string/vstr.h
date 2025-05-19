/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:15:05 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 01:06:35 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VSTR_H
# define VSTR_H

# include "string/s_str.h"
# include "string/s_mstr.h"

t_vstr USE
empty_vstr(void);

t_vstr USE
build_vstr(const char *buff, t_size len);

t_size USE
vstr_index_of(t_vstr str, char c);

t_vstr USE
vstr_subvstr(t_vstr str, t_isize offs, t_size len);

#endif