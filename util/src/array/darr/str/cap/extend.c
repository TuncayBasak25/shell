/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extend.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:32:45 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 12:33:53 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

t_result USE
darr_str_extend(t_darr_str *self, t_size need)
{
	return (darr_str_grow(self, self->len + need));
}
