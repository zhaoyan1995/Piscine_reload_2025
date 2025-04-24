# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 19:43:40 by yanzhao           #+#    #+#              #
#    Updated: 2025/04/22 19:59:10 by yanzhao          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=cc -Wall -Wextra -Werror
SRC_PATH= ./srcs/
HEADER_PATH=./includes
SRC=$(SRC_PATH)ft_putchar.c $(SRC_PATH)ft_putstr.c $(SRC_PATH)ft_strcmp.c $(SRC_PATH)ft_strlen.c $(SRC_PATH)ft_swap.c
OBJ= $(SRC:.c=.o)

all:$(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $^

%.o:%.c
	$(CC) -I$(HEADER_PATH) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
