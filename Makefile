# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 00:22:56 by hlakhal-          #+#    #+#              #
#    Updated: 2023/02/03 04:00:59 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = servire
NAME1 = client

SRCS = servire.c libft/ft_putchar_fd.c  ft_printf/ft_printf.c\
	ft_printf/ft_putnbr.c ft_printf/ft_putstr.c ft_printf/ft_putchar_.c \
	ft_printf/ft_put_hex.c ft_printf/ft_putnbr_u.c ft_printf/ft_uitao.c ft_printf/ft_pointer_void.c\
	ft_printf/ft_memset.c ft_printf/ft_itoa.c  ft_printf/ft_put_hex_u.c

SRCS1 = client.c libft/ft_atoi.c

CC		= cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRCS:.c=.o)
OBJ1 = $(SRCS1:.c=.o)

all:servire client

servire:$(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o servire
client:$(OBJ1)
		$(CC) $(CFLAGS) $(OBJ1) -o client

clean:
		rm -f  $(OBJ) $(OBJ1)

fclean:	clean
		rm -f $(NAME) $(NAME1)

re:		fclean all
