# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 11:12:02 by hsieczka          #+#    #+#              #
#    Updated: 2023/11/26 11:12:03 by hsieczka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTNAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFTDIR = ./libft

SRCS = ft_printf.c utils/ft_hex_utils.c utils/ft_str_utils.c utils/ft_int_utils.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@make clean -C $(LIBFTDIR)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFTDIR)

re: fclean all

.PHONY: clean fclean re all makelibft
