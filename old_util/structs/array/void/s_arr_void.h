/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_arr_void.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:34:11 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 12:36:12 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_ARR_VOID
# define S_ARR_VOID

# include "core.h"

typedef struct s_arr_void
{
	void	*buff;
	t_size	len;
	t_size	item_size;
}			t_arr_void;

#endif
