/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mstr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 06:19:29 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/20 06:22:50 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_mstr USE
dstr_mstr(t_dstr *self, t_isize offs, t_size len)
{
	return (build_submstr(self->buff, self->len, offs, len));
}
