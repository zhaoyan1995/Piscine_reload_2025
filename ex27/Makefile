# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/23 13:08:34 by yanzhao           #+#    #+#              #
#    Updated: 2025/04/23 13:23:07 by yanzhao          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BINARY_FILE=ft_display_file
CC=cc -Wall -Wextra -Werror 
SRC=main.c
OBJ=$(SRC:.c=.o)

all:$(BINARY_FILE)

$(BINARY_FILE):$(OBJ)
	$(CC) $< -o $@

%.o:%.c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(BINARY_FILE)
