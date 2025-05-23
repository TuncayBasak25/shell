/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_mstr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:58:01 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 07:40:08 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_MSTR_H
# define T_MSTR_H

# include "apis/core.h"

typedef struct s_mstr
{
	char	*buff;
	t_size	len;
}			t_mstr;

#endif