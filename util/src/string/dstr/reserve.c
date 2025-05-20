/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reserve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:43:51 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 09:46:58 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_dstr USE
reserve_dstr(t_size cap)
{
	t_dstr	self;

	self = empty_dstr();
	dstr_grow(&self, cap);
	return (self);
}
