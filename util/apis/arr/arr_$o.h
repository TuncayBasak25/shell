/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_$o.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:17:51 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/20 15:40:45 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARR_$O_H
# define ARR_$O_H

# include "arr/s_arr_$o.h"

t_arr_$o USE
build_arr_$o(t_$o *buff, t_size len);

t_arr_$o USE
empty_arr_$o(void);

t_arr_$o USE
new_arr_$o(t_size len);

void
drop_arr_$o(t_arr_$o *self);

t_arr_$o USE
clone_arr_$o(const t_arr_$o *src);

t_result
copy_arr_$o(t_arr_$o *dst, const t_arr_$o *src);

t_arr_$o USE
move_arr_$o(t_arr_$o *src);

#endif
