/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_marr_void.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:33:12 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 13:30:53 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_MARR_VOID_H
# define S_MARR_VOID_H

# include "core.h"

typedef struct s_marr_void
{
	void	*buff;
	t_size	len;
	t_size	item_size;
}			t_marr_void;

#endif