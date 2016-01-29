#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/01/21 16:10:35 by randrini          #+#    #+#             *#
#*   Updated: 2016/01/21 22:35:56 by randrini         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = do-op

SRC = srcs/ft_atoi.c \
	  srcs/ft_calc.c \
	  srcs/ft_do_op.c \
	  srcs/ft_putchar.c \
	  srcs/ft_putnbr.c \
	  srcs/main.c

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
