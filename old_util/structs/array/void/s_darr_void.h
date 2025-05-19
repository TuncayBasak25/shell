/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_darr_void.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:34:11 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 12:44:18 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_DARR_VOID
# define S_DARR_VOID

# include "core.h"

typedef struct s_darr_void
{
	void	*buff;
	t_size	len;
	t_size	cap;
	t_size	item_size;
}			t_darr_void;

#endif
