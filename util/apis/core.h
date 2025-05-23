/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 05:32:33 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 16:13:43 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_H
# define CORE_H

# define FNAME __func__
# define USE __attribute__((warn_unused_result))

# define MAX_LEN -1

/**
 * @typedef t_u8
 * @brief 8-bit unsigned integer
 */
typedef unsigned char		t_u8;

/**
 * @typedef t_u16
 * @brief 16-bit unsigned integer
 */
typedef unsigned short		t_u16;

/**
 * @typedef t_u32
 * @brief 32-bit unsigned integer
 */
typedef unsigned int		t_u32;

/**
 * @typedef t_u64
 * @brief 64-bit unsigned integer
 */
typedef unsigned long long	t_u64;

/**
 * @typedef t_size
 * @brief Platform-sized unsigned integer, used for lengths and indices
 */
typedef unsigned long long	t_size;

/**
 * @typedef t_i8
 * @brief 8-bit signed integer
 */
typedef char				t_i8;

/**
 * @typedef t_i16
 * @brief 16-bit signed integer
 */
typedef short				t_i16;

/**
 * @typedef t_i32
 * @brief 32-bit signed integer
 */
typedef int					t_i32;

/**
 * @typedef t_i64
 * @brief 64-bit signed integer
 */
typedef long long			t_i64;

/**
 * @typedef t_isize
 * @brief Platform-sized signed integer, used for relative offsets
 */
typedef long long			t_isize;

/**
 * @typedef t_f32
 * @brief 32-bit IEEE 754 floating point
 */
typedef float				t_f32;

/**
 * @typedef t_f64
 * @brief 64-bit IEEE 754 floating point
 */
typedef double				t_f64;

/**
 * @typedef t_cstr
 * @brief Pointer to a null-terminated C string
 */
typedef char *				t_cstr;

/**
 * @typedef t_carr_cstr
 * @brief A null-terminated array of C strings (`char *`).
 *
 * This type is used for handling lists of C strings.
 * 
 * The last element in the array must always be `NULL`.
 */
typedef t_cstr				*t_carr_cstr;

typedef t_i32				t_fd;

/**
 * @enum e_result
 * @brief Generic result type for operations outcome
 */
typedef enum e_result
{
	OK,
	FAIL
}	t_result;

/**
 * @enum e_bool
 * @brief Boolean enum for clarity and readability
 */
typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

/**
 * @enum e_flow
 * @brief Control flow enum for iteration semantics
 */
typedef enum e_flow
{
	BREAK,
	CONTINUE
}	t_flow;

void
error_log(t_cstr message);

#endif