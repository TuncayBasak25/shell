/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_darr_str.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:11:33 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 22:44:45 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_DARR_STR_H
# define S_DARR_STR_H

#include "string/s_str.h"

typedef struct s_darr_str
{
	t_str	*buff;
	t_size	len;
	t_size	cap;
}			t_darr_str;

#endif