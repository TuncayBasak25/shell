/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_str.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:58:01 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/18 15:01:08 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_STR_H
# define S_STR_H

# include "core.h"

 /**
 * @struct t_str
 * @brief Owned string with known length.
 *
 * Fully owned string buffer. Not null-terminated.
 * 
 * Must be dropped when no longer needed.
 */
typedef struct s_str
{
	char	*buff;  /** Pointer to the owned string buffer. */
	t_size	len;    /** Number of bytes in the buffer. */
}			t_str;

#endif