/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vstr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:58:01 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 07:40:41 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VSTR_H
# define T_VSTR_H

# include "apis/core.h"

typedef struct s_vstr
{
	const char	*buff;
	t_size		len;
}				t_vstr;

#endif