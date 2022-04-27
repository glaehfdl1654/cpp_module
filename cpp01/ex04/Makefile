# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 02:26:31 by jaejeong          #+#    #+#              #
#    Updated: 2022/04/27 18:38:42 by jaejeong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		= c++
CXXFLAGS= -Wall -Werror -Wextra -std=c++98
NAME	= replace
SRCS	= main.cpp
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
