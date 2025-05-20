/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darr_str.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 21:26:35 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/20 06:30:45 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DARR_STR_H
# define DARR_STR_H

# include "array/str/s_darr_str.h"

t_darr_str USE
empty_darr_str(void);

t_darr_str USE
build_darr_str(t_str *buff, t_size len, t_size cap);

void
drop_darr_str(t_darr_str *self);

#endif