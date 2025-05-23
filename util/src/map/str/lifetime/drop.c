/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:43:58 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 10:44:50 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void
drop_map_str(t_map_str *self)
{
	drop_darr_str(&self->keys);
	drop_darr_str(&self->values);
	*self = empty_map_str();
}
