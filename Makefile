# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/23 09:15:58 by cryu              #+#    #+#              #
#    Updated: 2020/12/30 16:06:20 by cryu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_atoi.c \
	  ft_strncmp.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strnstr.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_memcmp.c \
	  ft_memchr.c \
	  ft_memmove.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_strdup.c \
	  ft_calloc.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

OBJ = $(SRC:.c=.o)

BOUNS_OBJ = $(BOUNS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

