# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/23 09:15:58 by cryu              #+#    #+#              #
#    Updated: 2020/12/28 00:19:16 by cryu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = main.c \
	  ft_isalpha.c \
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
	  ft_memchr.c


RM = rm -rf

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

