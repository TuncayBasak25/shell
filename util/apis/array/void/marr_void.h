/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   marr_void.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:33:12 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 13:41:50 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MARR_VOID_H
# define MARR_VOID_H

# include "array/void/s_arr_void.h"
# include "array/void/s_marr_void.h"

t_marr_void USE
build_marr_void(void *buff, t_size len, t_size item_size);

t_marr_void USE
marr_void_marr(t_marr_void marr, t_isize offs, t_size len);

#endif