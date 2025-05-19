# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 09:07:35 by tbasak            #+#    #+#              #
#    Updated: 2025/05/19 01:54:15 by tbasak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

SRC = $(shell find src -name "*.c")

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./include -I./util/apis -I./util/structs

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@make -C util
	$(CC) $(CFLAGS) $(OBJ) -lreadline -L./util -lutil -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re