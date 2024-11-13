# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 17:19:05 by zwaschwi          #+#    #+#              #
#    Updated: 2024/11/08 16:22:46 by zwaschwi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror -Iincludes
SOURCES = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c\
	ft_isprint.c \
	ft_strlen.c\
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c\
	ft_strncmp.c\
	ft_memchr.c\
	ft_strnstr.c\
	ft_atoi.c
LIB = libft.h
TESTFILE = test.c
UNITY = ~/Documents/Unity_tests/src/unity.c
OFILES = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o: %.c $(LIB)
	$(CC) $(FLAGS) -c $< -o $@

test_run: 
	$(CC) $(UNITY)

test: test.o
	./a.out

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

