# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 21:25:23 by mlarra            #+#    #+#              #
#    Updated: 2022/10/12 10:18:44 by mlarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	miniRT

HEADERS		=	headers/*

SRCDIR		=	sources

OBJDIR		=	objects

SRC			=	$(wildcard $(SRCDIR)/*.c) $(wildcard $(SRCDIR)/*/*.c)

OBJ			=	$(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

CC			=	cc

CFLAGS		=	-O1 -Wall -Wextra -Werror -g

LIBS		=	./libraries/libft/libft.a ./libraries/libmlx/libmlx.a

INC			=	-I ./headers -I ./libraries/libft -I ./libraries/libmlx

LIB_FT		=	-L ./libraries/libft/ -lft

LIB_MLX		=	-L ./libraries/libmlx/ -lmlx -framework OpenGL -framework AppKit

# **************************************************************************** #

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(INC) $(LIB_FT) $(LIB_MLX) $^ -o $@

$(OBJDIR)/%.o : $(SRCDIR)/%.c $(LIBS) $(HEADERS)
	@mkdir -p $(OBJDIR)
	@mkdir -p $(@:/$(notdir $@)=)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBS) :
	make -C libraries/libft
	make -C libraries/libmlx

clean :
	rm -rf $(OBJDIR)
	make clean -C libraries/libft
	make clean -C libraries/libmlx

fclean : clean
	rm -f $(NAME)
	make fclean -C libraries/libft
	make fclean -C libraries/libmlx

re : fclean all

.PHONY : all clean fclean re