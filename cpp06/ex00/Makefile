# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 03:10:03 by jaejeong          #+#    #+#              #
#    Updated: 2022/05/12 15:59:47 by jaejeong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98 -I$(INCDIR)
NAME		= converter
SRCNAME 	= main.cpp \
			  Converter.cpp
SRCS		= $(addprefix $(SRCDIR)/, $(SRCNAME))
SRCDIR		= srcs
OBJS		= $(addprefix $(OBJDIR)/, $(SRCNAME:.cpp=.o))
OBJDIR		= build
INCDIR		= includes

all			: $(NAME)

$(NAME)		: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -o $@ -c $^

$(OBJDIR)	:
	mkdir build

clean		:
	$(RM) -r $(OBJDIR)

fclean		: clean
	$(RM) $(NAME)

re			: fclean all

.PHONY		: all clean fclean re
