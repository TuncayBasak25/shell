/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darr_str.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:49:26 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 02:18:31 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DARR_STR_H
# define DARR_STR_H

# include "array/str/s_darr_str.h"

t_darr_str USE
new_darr_str(void);

void
drop_darr_str(t_darr_str *self);

t_result
darr_str_push(t_darr_str *self, t_vstr str, t_size index);

void
darr_str_drop(t_darr_str *self, t_size index);

#endif