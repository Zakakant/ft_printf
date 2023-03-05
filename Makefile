# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/01 15:53:17 by zkantara          #+#    #+#              #
#    Updated: 2023/02/24 18:01:52 by zkantara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 		ft_printf.c\
			ft_usig_decimal.c\
			ft_decimal_frm.c\
			ft_argument.c\
			ft_address.c\
			ft_puts.c\
			ft_hex.c\
			ft_char.c\
			ft_itoa.c\
			ft_unsitoa.c\
			ft_cs_hexadecimal.c\
			ft_hexadecimal.c\
			ft_formats.c\
			ft_input.c\

OBJS = $(SRCS:.c=.o)

FLAGS	= -Wall -Werror -Wextra

all: $(NAME)

%.o : %.c ft_printf.h
	cc $(FLAGS) -c $<

$(NAME):$(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f *.o
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
