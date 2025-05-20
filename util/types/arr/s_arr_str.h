/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_arr_str.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:17:51 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/20 15:20:08 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_ARR_STR_H
# define S_ARR_STR_H

# include "s_str.h"

typedef struct s_arr_str
{
	t_str	*buff;
	t_size	len;
}			t_arr_str;

#endif
