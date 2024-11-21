# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 17:19:05 by zwaschwi          #+#    #+#              #
#    Updated: 2024/11/20 17:23:27 by zwaschwi         ###   ########.fr        #
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
	ft_memcmp.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c 
#BONUS = \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstdelone.c \
	ft_lstadd_back.c \
	ft_lstclear.c \
	ft_lstiter.c
LIB = libft.h
TESTFILE = test.c 
UNITY = unity.c
TEST_OBJS = $(TESTFILE:.c=.o) $(UNITY:.c=.o)
OFILES = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o: %.c $(LIB)
	$(CC) $(FLAGS) -c $< -o $@

test: $(TEST_OBJS) $(LIBFT)
	$(CC) $(FLAGS) $(TEST_OBJS) $(SOURCES) $(LIBFT) -o test.out

test_run: test
	./test.out

%.o: %.c $(LIB)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

