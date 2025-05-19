/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:21:14 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 11:55:26 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_str USE
str_from_cstr(t_cstr *cstr)
{
	char	*buff;
	t_size	len;

	buff = *cstr;
	len = cstr_len(cstr);
	*cstr = 0;
	return (build_str(buff, len));
}
