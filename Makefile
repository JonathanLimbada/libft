# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 09:54:42 by jlimbada          #+#    #+#              #
#    Updated: 2019/05/21 10:00:39 by jlimbada         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Werror -Wextra
OBJECT = *.o
SOURCE = *.c
OPTIONS = -C -I.

all: $(NAME)

$(NAME);
	gcc $(FLAG) $(OPTIONS) $(SOURCE)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)
clean:
	/bin/rm -f $(NAME)

re: fclean all
