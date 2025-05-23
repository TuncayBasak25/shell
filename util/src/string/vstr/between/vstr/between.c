/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   between.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:57:27 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 14:58:24 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

t_vstr USE
vstr_vstr_between(t_vstr str, char start, char end)
{
	str = vstr_chop_until(str, start);
	str = vstr_chop_after(str, end);
	return (str);
}
