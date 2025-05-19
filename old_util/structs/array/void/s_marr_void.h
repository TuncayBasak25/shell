/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_marr_void.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:34:11 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 12:41:39 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_MARR_VOID
# define S_MARR_VOID

# include "core.h"

typedef struct s_marr_void
{
	void	*buff;
	t_size	len;
	t_size	item_size;
}			t_marr_void;

#endif
