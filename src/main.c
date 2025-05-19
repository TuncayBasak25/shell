/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 16:21:51 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/19 00:38:46 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "map/map_str.h"


t_i32	main(t_i32 ac, t_cstr av[], t_carr_cstr envp)
{
	(void)ac;
	(void)av;
	(void)envp;
	t_map_str env = env_map_init(envp);
	debug_map_str(&env);
	drop_map_str(&env);
}
