# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meserghi <mehdiaerghini@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 19:45:51 by meserghi          #+#    #+#              #
#    Updated: 2023/10/02 19:45:55 by meserghi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	libftprintf.a
SRCS=	ft_print_add.c ft_putchar.c ft_putnbr_hex.c \
		ft_putnbr_u.c ft_putnbr.c ft_putstr.c printf.c

OBJS	= ${SRCS:%.c=%.o}

FLAGS	= -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I ./
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all