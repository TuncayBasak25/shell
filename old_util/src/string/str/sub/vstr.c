/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 01:12:00 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 12:17:11 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_vstr USE
str_vstr(const t_str *self, t_isize offs, t_size len)
{
	return (build_subvstr(self->buff, self->len, offs, len));
}
