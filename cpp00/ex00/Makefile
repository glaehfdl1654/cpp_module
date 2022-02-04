# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 15:09:44 by jaejeong          #+#    #+#              #
#    Updated: 2022/02/04 15:09:45 by jaejeong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= clang++
CFLAGS	= -Wall -Werror -Wextra
NAME	= megaphone
SRCS	= megaphone.c
OBJS	= $(SRCS:.c=.o)

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o		: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean		:
	$(RM) $(OBJS)

fclean		: clean
	$(RM) $(NAME)

re			: fclean all

.PHONY		: all clean fclean re
