# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/23 09:15:58 by cryu              #+#    #+#              #
#    Updated: 2020/12/24 10:21:28 by cryu             ###   ########.fr        #
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
	  ft_atoi.c


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

