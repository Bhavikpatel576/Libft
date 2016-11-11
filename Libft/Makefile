# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpatel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/XX/XX 20:48:48 by bpatel            #+#    #+#              #
#    Updated: 2016/11/03 21:36:02 by bpatel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME			= libft
LIB				= libft.a
SRCS_DIR 		= srcs/
INCLUDES_DIR	= includes/
FILENAMES		= main.c
LIB_FILES		= ft_putchar.c ft_putstr.c ft_strlen.c ft_strcpy.c ft_putnbr.c ft_strdup.c ft_strncpy.c ft_strstr.c ft_atoi.c ft_strcmp.c \
	ft_strncmp.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_strcat.c ft_strchr.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_toupper.c ft_tolower.c ft_putchar_fd.c ft_putnbr_fd.c \
	ft_strclr.c ft_strdel.c ft_strequ.c ft_strjoin.c ft_itoa.c ft_reverse.c ft_swap.c \
	ft_striter.c





CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -I $(INCLUDES_DIR)
SRCS		= $(addprefix $(SRCS_DIR), $(FILENAMES))
LIB_SRCS	= $(addprefix $(SRCS_DIR), $(LIB_FILES))
OBJS		= $(FILENAMES:.c=.o)
LIB_OBJS	= $(LIB_FILES:.c=.o)

all: $(LIB)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS) $(LIB)

$(LIB): $(LIB_OBJS)
	ar rc $(LIB) $(LIB_OBJS) && ranlib $(LIB)

$(LIB_OBJS):
	$(CC) $(CFLAGS) -c $(LIB_SRCS)

clean:
	/bin/rm -f $(LIB_OBJS) $(OBJS)

fclean: clean
	/bin/rm -f $(LIB) $(NAME)

re: fclean all
