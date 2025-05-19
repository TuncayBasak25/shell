/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_mstr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:58:01 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/18 14:57:43 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_MSTR_H
# define S_MSTR_H

# include "core.h"

/**
 * @struct t_mstr
 * @brief Mutable view into a string buffer.
 *
 * Non-owning, writable view into a buffer segment.
 * 
 * Useful for slicing or referencing data without memory management.
 * 
 * Used for local mutations.
 */
typedef struct s_mstr
{
	char	*buff; /** Pointer to the start of the view. */
	t_size	len;   /** Length of the view. */
}			t_mstr;

#endif