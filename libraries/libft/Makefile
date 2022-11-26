# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 20:24:51 by mlarra            #+#    #+#              #
#    Updated: 2022/11/14 14:25:48 by mlarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

HEADER	=	libft.h

SRC		=	$(wildcard ./src/*.c)

OBJ		=	$(SRC:./src/%.c=./obj/%.o)

CC		=	cc

CFLAGS	=	-O1 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $?

obj/%.o: src/%.c
	@mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re