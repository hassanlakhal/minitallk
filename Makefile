# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 00:22:56 by hlakhal-          #+#    #+#              #
#    Updated: 2023/02/03 03:01:52 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = servire
NAME1 = client

SRCS = servire.c libft/ft_putchar_fd.c

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
