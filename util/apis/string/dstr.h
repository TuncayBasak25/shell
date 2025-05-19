/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:15:05 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 00:42:22 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DSTR_H
# define DSTR_H

# include "string/s_dstr.h"
# include "string/s_mstr.h"

t_dstr USE
new_dstr(t_cstr cstr);

t_dstr USE
empty_dstr(void);

t_result
dstr_append(t_dstr *self, t_vstr str);

t_result
dstr_push_back(t_dstr *self, char c);

#endif