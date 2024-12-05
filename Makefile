# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbruha <tbruha@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 15:03:16 by tbruha            #+#    #+#              #
#    Updated: 2024/12/05 16:08:39 by tbruha           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
AR		= ar rcs $(NAME)
LIB		= ranlib $(NAME)
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
CC		= cc

SRC		=	ft_printf.c \
			convert_char.c \
			convert_int.c \
			convert_string.c \
			convert_unsignedint.c \
			convert_hex.c \
			convert_upperhex.c \
			convert_pointer.c

OBJ		:=	$(SRC:%.c=%.o)

all:	$(NAME)

$(NAME): $(OBJ) libft
	$(AR) $(OBJ) $(NAME)

libft:
	@make -C libft
	@cp libft/libft.a ./
	@mv libft.a $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<	

clean:
	$(RM) $(OBJ)
	make clean -C libft

fclean:		clean
	$(RM) $(NAME)
	make fclean -C libft

re:	fclean all

.PHONY:	all libft clean fclean re
