# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bastiangranier <bastiangranier@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/05 13:00:48 by bgranier          #+#    #+#              #
#    Updated: 2026/01/05 14:19:38 by bastiangran      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	push_swap
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -I . -I $(LIBFT_DIR)

SRC = push_swap.c \
	init_stack.c \
	sa.c \
	sort_500.c \
	disorder.c \
	sort_simple.c \
	sort_adaptive.c \
	sort_medium.c \
	dispatch_sort.c \
	sort_complex.c \
	sort_100.c \
	operate.c \
	index_stack.c \
	sb.c \
	ss.c \
	rotate.c \
	push.c \
	new_node.c \
	stack_utils.c \
	new_stack.c \
	sorted.c \
	reverse_rotate.c \

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