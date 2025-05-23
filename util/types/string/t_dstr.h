/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_dstr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:58:01 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 07:39:19 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_DSTR_H
# define T_DSTR_H

# include "apis/core.h"

typedef struct s_dstr
{
	char	*buff;
	t_size	len;
	t_size	cap;
}			t_dstr;

#endif