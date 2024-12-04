# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndabbous <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 12:31:22 by ndabbous          #+#    #+#              #
#    Updated: 2024/12/02 17:37:11 by ndabbous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs

SRCS = ft_printf.c ft_ptr_count.c ft_putchar_count.c ft_putnbr_hexa_count.c \
	ft_putnbr_count.c ft_uputnbr_count.c ft_putstr_count.c ft_check_format.c

OBJS = ${SRCS:.c=.o}

all : ${NAME}

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
