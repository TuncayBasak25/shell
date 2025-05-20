/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:17:51 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/20 15:40:45 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARR_STR_H
# define ARR_STR_H

# include "arr/s_arr_str.h"

t_arr_str USE
build_arr_str(t_str *buff, t_size len);

t_arr_str USE
empty_arr_str(void);

t_arr_str USE
new_arr_str(t_size len);

void
drop_arr_str(t_arr_str *self);

t_arr_str USE
clone_arr_str(const t_arr_str *src);

t_result
copy_arr_str(t_arr_str *dst, const t_arr_str *src);

t_arr_str USE
move_arr_str(t_arr_str *src);

#endif
