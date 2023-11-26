# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 11:10:52 by hsieczka          #+#    #+#              #
#    Updated: 2023/11/25 11:10:55 by hsieczka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
ft_putendl_fd.c ft_split.c 

BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
ft_lstiter_bonus.c ft_lstmap_bonus.c 

OBJECTS = $(SRCS:.c=.o)

BONUSOBJS = $(BONUS_SRCS:.c=.o) 

AR = ar rc 

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

bonus: $(OBJECTS) $(BONUSOBJS)
	$(AR) $(NAME) $(OBJECTS) $(BONUSOBJS)

clean:
	@rm -f $(OBJECTS) $(BONUSOBJS)

fclean: clean  
	@rm -f $(NAME) 

re: fclean all

.PHONY: clean fclean re all bonus