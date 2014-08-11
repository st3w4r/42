# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/08/11 17:14:40 by ybarbier          #+#    #+#              #
#    Updated: 2014/08/12 00:31:22 by ybarbier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH_SRC = ./src/
HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strcmp.c \
		$(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
	
