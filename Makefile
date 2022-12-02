# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reben-ha <reben-ha@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 11:57:29 by reben-ha          #+#    #+#              #
#    Updated: 2022/11/17 20:39:53 by reben-ha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_hex.c \
		ft_putnbr_pos.c ft_putstr.c ft_strlen.c ft_putptr.c

OBJ = ft_printf.o ft_putchar.o ft_putnbr.o ft_putnbr_hex.o \
		ft_putnbr_pos.o ft_putstr.o ft_strlen.o ft_putptr.o

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)
%.o : %.c ft_printf.h
	cc -Wall -Wextra -Werror -c $< -o $@
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY = all bonus clean fclean re just