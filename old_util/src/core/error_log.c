/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_log.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 00:43:35 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 00:47:56 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string/cstr.h"
#include <unistd.h>

void
error_log(const t_cstr message)
{
	write(2, message, cstr_len(message));
	write(2, "\n", 1);
}
