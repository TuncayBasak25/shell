/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:47:53 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 16:38:20 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_i32
main(t_i32 ac, t_cstr *av, t_carr_cstr envp)
{
	t_shell	shell;

	(void)ac;
	(void)av;
	shell = (t_shell){0};
	env_map_init(&shell, envp);
	while (TRUE)
	{
		prompt(&shell);
		parse_input(&shell);
		//debug_str(&shell.input);
		drop_str(&shell.input);
	}
}
