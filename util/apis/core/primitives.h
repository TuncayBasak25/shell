/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primitives.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 16:00:26 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/17 16:17:18 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRIMITIVES_H
# define PRIMITIVES_H

typedef unsigned char		t_u8;
typedef unsigned short		t_u16;
typedef unsigned int		t_u32;
typedef unsigned long long	t_u64;
typedef unsigned long long	t_size;

typedef char				t_i8;
typedef short				t_i16;
typedef int					t_i32;
typedef long long			t_i64;
typedef long long			t_isize;

typedef float				t_f32;
typedef double				t_f64;

typedef char *				t_cstr;

typedef enum e_result
{
	SUCCESS,
	FAIL
}	t_result;

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

typedef enum e_flow
{
	BREAK,
	CONTINUE
}	t_flow;

typedef struct s_range
{
	t_size	start;
	t_size	end;
}			t_range;

#endif