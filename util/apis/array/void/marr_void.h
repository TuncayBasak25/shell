/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   marr_void.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:33:12 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 18:15:09 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MARR_VOID_H
# define MARR_VOID_H

# include "array/void/s_arr_void.h"
# include "array/void/s_marr_void.h"

t_marr_void USE
build_marr_void(void *buff, t_size len, t_size item_size);

t_marr_void USE
marr_void_marr(t_marr_void marr, t_isize offs, t_size len);

typedef struct s_darr_void
{
	void	**buff;
	t_size	*len;
	t_size	*cap;
	t_size	item_count;
}			t_darr_void;

t_darr_void USE
darr_str_void(t_darr_str *self)
{
	return ((t_darr_void){(void **)&self->buff, &self->len, &self->cap, sizeof(t_str)});
}

void
darr_str_push_vstr(t_darr_str *self, t_vstr vstr)
{
	t_str	str;

	str = str_from_vstr(vstr);	
	darr_void_push_own(darr_str_void(self), &str, drop_str);
}

#endif