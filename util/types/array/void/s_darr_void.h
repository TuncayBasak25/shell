/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_darr_void.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:33:12 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 13:31:04 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_DARR_VOID_H
# define S_DARR_VOID_H

# include "core.h"

typedef struct s_darr_void
{
	void	*buff;
	t_size	len;
	t_size	cap;
	t_size	item_size;
}			t_darr_void;

#endif