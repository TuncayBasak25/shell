/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_varr_vstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:11:33 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/18 16:14:21 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_VARR_VSTR_H
# define S_VARR_VSTR_H

#include "string/s_vstr.h"

typedef struct s_varr_vstr
{
	const t_vstr	*buff;
	t_size			len;
}					t_varr_vstr;

#endif