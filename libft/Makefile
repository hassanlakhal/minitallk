# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 21:22:26 by hlakhal-          #+#    #+#              #
#    Updated: 2022/11/01 15:00:11 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = \
ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_tolower.c ft_isprint.c\
ft_putchar_fd.c ft_strlcat.c ft_substr.c  ft_itoa.c ft_putendl_fd.c ft_atoi.c\
ft_strlcpy.c  ft_bzero.c ft_memcpy.c ft_putnbr_fd.c ft_strlen.c\
ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c ft_strncmp.c\
ft_memcmp.c ft_split.c ft_memcpy.c ft_striteri.c ft_strchr.c ft_strrchr.c \
ft_isascii.c ft_memmove.c ft_strdup.c ft_toupper.c ft_strnstr.c ft_islpha.c


OBJS = ft_isdigit.o ft_memset.o ft_strjoin.o ft_strtrim.o ft_tolower.o ft_isprint.o\
ft_putchar_fd.o ft_strlcat.o ft_substr.o  ft_itoa.o ft_putendl_fd.o ft_atoi.o\
ft_strlcpy.o  ft_bzero.o ft_memcpy.o ft_putnbr_fd.o ft_strlen.o\
ft_calloc.o ft_memchr.o ft_putstr_fd.o ft_strmapi.o ft_isalnum.o ft_strncmp.o\
ft_memcmp.o ft_split.o ft_memcpy.o ft_striteri.o ft_strchr.o ft_strrchr.o \
ft_isascii.o ft_memmove.o ft_strdup.o ft_toupper.o ft_strnstr.o ft_islpha.o



CC		= cc

CFLAGS = -Wall -Wextra -Werror

.o :
		${CC} ${CFLAGS}   -c -o   ${OBJS} ${SRCS}

$(NAME): $(OBJS)
		ar -r -c  ${NAME} ${OBJS}


all:${NAME}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all
