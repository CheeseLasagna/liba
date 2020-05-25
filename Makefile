# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlavelle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/19 13:08:48 by tlavelle          #+#    #+#              #
#    Updated: 2020/05/25 18:43:16 by tlavelle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror -c
SOURCES = ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlen.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strncmp.c\
		ft_atoi.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c
BONUS = ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c
OBJ = $(SOURCES:.c=.o)
BONUSOBJ = $(BONUS:.c=.o)
all: $(NAME)

$(NAME): objects 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: objects
	ar rc $(NAME) $(OBJ) $(BONUSOBJ)
	ranlib $(NAME)

objects:
	gcc $(FLAGS) $(SOURCES) $(BONUS) 

clean:
	rm -f $(OBJ) $(BONUSOBJ) 

fclean: clean
	rm -f $(NAME) libft.so

re: fclean all

so:
	gcc -fPIC -c $(SOURCES) $(BONUSSRC)
	gcc -shared -o libft.so $(OBJ) $(BONUSOBJ)

.PHONY: all clean fclean re 
