/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uabs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 00:52:55 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 10:55:43 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

t_size USE
uabs(t_isize value)
{
	if (value < 0)
		return (-value);
	return (value);
}
