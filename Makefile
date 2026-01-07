# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/05 13:00:48 by bgranier          #+#    #+#              #
#    Updated: 2026/01/06 12:52:40 by bgranier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	push_swap
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -I . -I $(LIBFT_DIR)

SRC = push_swap.c \
	init_stack.c \
	sort_500.c \
	disorder.c \
	operate.c \
	sort_simple.c \
	sort_adaptive.c \
	sort_medium.c \
	dispatch_sort.c \
	sort_complex.c \
	sort_100.c \
	index_stack.c \
	new_node.c \
	stack_utils.c \
	new_stack.c \
	sorted.c \

OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

clean:
	rm -rf $(OBJ)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -rf $(NAME) ./a.out gcc
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re