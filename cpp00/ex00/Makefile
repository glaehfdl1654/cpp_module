# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 15:09:44 by jaejeong          #+#    #+#              #
#    Updated: 2022/04/21 21:58:20 by jaejeong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		= c++
CXXFLAGS= -Wall -Werror -Wextra -std=c++98
NAME	= megaphone
SRCS	= megaphone.cpp
OBJS	= $(SRCS:.cpp=.o)

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o		: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $^

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
