/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:09:23 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/23 16:44:42 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_fd USE
read_heredoc(t_mstr input)
{
	t_size	i;

	i = 0;
	while (i < input.len)
	{
		if ()
	}
}

void
parse_heredoc(t_shell *shell)
{
	t_mstr	input;
	t_size	i;

	input = str_mstr(&shell->input, 0, -1);
	i = 0;
	while (i < input.len)
	{
		if (input.buff[i++] == '<')
		{
			if (i == input.len)
				return ;
			if (input.buff[i] != '<')
				continue ;
			input.buff[i - 1] = ' ';
			input.buff[i++] = ' ';
			shell->heredoc_fd = read_heredoc(mstr_mstr(input, i, -1));
		}
	}
}

void
parse_input(t_shell *shell)
{
	parse_heredoc(shell);
	
}
