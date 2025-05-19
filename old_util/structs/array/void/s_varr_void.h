/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_varr_void.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:34:11 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 12:42:54 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_VARR_VOID
# define S_VARR_VOID

# include "core.h"

typedef struct s_varr_void
{
	const void	*buff;
	t_size		len;
	t_size		item_size;
}				t_varr_void;

#endif
