# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgallien <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/16 14:52:04 by hgallien          #+#    #+#              #
#    Updated: 2021/02/22 15:06:25 by hgallien         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS = $(addprefix src/, ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c push_swap.c both_op.c op_a.c op_b.c fill.c find.c get.c little_f.c move.c sort.c tab.c ft_atoi.c parse.c ft_isdigit.c main_utils.c move_utils.c solver_utils.c little_sort.c)
HEADERS = $(addprefix src/, push.h libft.h)
CC= gcc
CFLAGS= -Wall -Wextra -Werror
NAME=	push_swap 
OBJ= $(SRCS:src/%.c=%.o)
DBGFLAGS= -g3 -fsanitize=address
$(HEADERS) = $(addprefix src/, push.h libft.h)
.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC)  $(OBJ) -o $(NAME)
dgb: $(OBJ)
	$(CC) $(DBGFLAGS) $(OBJ)  -o $(NAME)

%.o: src/%.c $(HEADERS) 
	$(CC)  $(CFLAGS) -c $<
clean:
	rm -f $(OBJ) $(SRCB:.c=.o)
fclean: clean
	rm -f $(NAME)
re: fclean al
