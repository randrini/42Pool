#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/01/23 12:38:40 by randrini          #+#    #+#             *#
#*   Updated: 2016/01/25 15:06:53 by randrini         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = ft_tail

SRCS = *.c

OBJ = *.o

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc -c $(FLAG) $(SRCS)
	@gcc $(FLAG) $(SRCS) -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
