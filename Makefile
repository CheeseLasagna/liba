# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlavelle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/19 13:08:48 by tlavelle          #+#    #+#              #
#    Updated: 2020/05/19 20:47:11 by tlavelle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror -c
HEADER = ./
SOURCES = ./ft_memset.c\
		./ft_bzero.c\
		./ft_memcpy.c\
		./ft_memccpy.c\
		./ft_memmove.c\
		./ft_memchr.c\
		./ft_memcmp.c\
		./ft_strlen.c\
		./ft_strlcpy.c\
		./ft_strlcat.c\
		./ft_strchr.c\
		./ft_strrchr.c\
		./ft_strnstr.c\
		./ft_strncmp.c\
		./ft_atoi.c\
		./ft_isalpha.c\
		./ft_isdigit.c\
		./ft_isalnum.c\
		./ft_isascii.c\
		./ft_isprint.c\
		./ft_toupper.c\
		./ft_tolower.c\
		./ft_calloc.c\
		./ft_strdup.c\
		./ft_substr.c\
		./ft_strjoin.c\
		./ft_strtrim.c\
		./ft_split.c\
		./ft_itoa.c\
		./ft_strmapi.c\
		./ft_putchar_fd.c\
		./ft_putstr_fd.c\
		./ft_putendl_fd.c\
		./ft_putnbr_fd.c
OBJ = $(SOURCES:.c=.o)
all: $(NAME)

$(NAME): objects 
	ar rc $(NAME) $(OBJ) 

objects:
	gcc $(FLAGS) $(SOURCES) 

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	gcc -fPIC -c $(SOURCES)
	gcc -shared -o libft.so $(OBJ)

.PHONY: all clean fclean re 
