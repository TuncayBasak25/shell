/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_map_str.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:58:01 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 07:53:07 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_MAP_STR_H
# define T_MAP_STR_H

# include "types/array/darr/t_darr_str.h"

typedef struct s_map_str
{
	t_darr_str	keys;
	t_darr_str	values;
}				t_map_str;

#endif