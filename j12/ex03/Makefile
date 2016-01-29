#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/01/26 12:24:56 by randrini          #+#    #+#             *#
#*   Updated: 2016/01/26 12:29:06 by randrini         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = ft_hexdump

SRCS = *.c

FLAG = -Wall -Wextra -Werror

OBJ = *.o

all: $(NAME)

$(NAME):
	@gcc $(FLAG) $(SRCS) -c
	@gcc $(FLAG) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
