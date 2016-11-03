# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpatel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/XX/XX 20:48:48 by bpatel            #+#    #+#              #
#    Updated: 2016/11/03 02:31:46 by bpatel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME			= libft
LIB				= libft.a
SRCS_DIR 		= srcs/
INCLUDES_DIR	= includes/
FILENAMES		= main.c
LIB_FILES		= ft_putchar.c ft_putstr.c ft_strlen.c ft_strcpy.c ft_putnbr.c

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
