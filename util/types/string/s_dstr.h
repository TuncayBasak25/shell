/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_dstr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:58:01 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/18 14:59:01 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_DSTR_H
# define S_DSTR_H

# include "core.h"

/**
 * @struct t_dstr
 * @brief Dynamically growable string buffer.
 *
 * Fully owned buffer with explicit capacity management.
 * 
 * Used for building or appending strings.
 */
typedef struct s_dstr
{
	char	*buff; /** Pointer to the allocated buffer. */
	t_size	len;   /** Current length of used content. */
	t_size	cap;   /** Total allocated capacity in bytes. */
}			t_dstr;

#endif