/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_map_str.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:41:14 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/18 23:03:32 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_MAP_STR
# define S_MAP_STR

# include "array/str/s_darr_str.h"

typedef struct s_map_str
{
	t_darr_str	keys;
	t_darr_str	values;
}				t_map_str;

#endif