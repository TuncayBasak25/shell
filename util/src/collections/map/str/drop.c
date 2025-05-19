/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 01:27:39 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 01:30:09 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map/map_str.h"
#include "array/str/darr_str.h"

void
drop_map_str(t_map_str *self)
{
	drop_darr_str(&self->keys);
	drop_darr_str(&self->values);
}