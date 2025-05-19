/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 16:17:27 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/18 20:04:45 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include "core/primitives.h"
# include "core.h"

typedef struct s_span
{
	t_size	start;
	t_size	len;
}			t_span;


#endif