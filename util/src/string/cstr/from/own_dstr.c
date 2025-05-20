/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   own_dstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:24:50 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 22:51:22 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_cstr USE
cstr_from_own_dstr(t_dstr *str)
{
	t_cstr	result;

	if (dstr_extend(str, 1) == FAIL)
	{
		if (str->len == 0)
			return (0);
	}
	str->buff[str->len] = '\0';
	result = str->buff;
	*str = empty_dstr();
	return (result);
}
