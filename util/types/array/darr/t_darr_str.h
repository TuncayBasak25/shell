/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_darr_str.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:58:01 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 12:24:46 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_DARR_STR_H
# define T_DARR_STR_H

# include "types/string/t_str.h"

typedef struct s_darr_str
{
	t_str	*buff;
	t_size	len;
	t_size	cap;
}			t_darr_str;

#endif