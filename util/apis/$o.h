/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   $o.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:09:54 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/20 16:09:15 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef $O_H
# define $O_H

# include "s_$o.h"

void
drop_$o(t_$o *src);

t_$o USE
clone_$o(const t_$o *src);

t_result
copy_$o(t_$o *dst, const t_$o *src);

t_$o USE
move_$o(t_$o *src);

#endif
