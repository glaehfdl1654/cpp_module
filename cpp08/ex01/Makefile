# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 15:09:44 by jaejeong          #+#    #+#              #
#    Updated: 2022/05/13 15:47:00 by jaejeong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		= c++
CXXFLAGS= -Wall -Werror -Wextra -std=c++98
NAME	= span
SRCS	= main.cpp \
		  Span.cpp
OBJS	= $(SRCS:.cpp=.o)

$(NAME)	: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

all		: $(NAME)

%.o		: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $^

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
