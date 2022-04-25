# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/21 22:44:18 by jaejeong          #+#    #+#              #
#    Updated: 2022/04/25 12:38:36 by jaejeong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98 -Iincludes
NAME		= Zombie
SRCNAME 	= main.cpp \
			  Zombie.cpp \
			  zombieHorde.cpp
SRCS		= $(addprefix $(SRCDIR)/, $(SRCNAME))
SRCDIR		= srcs
OBJS		= $(addprefix $(OBJDIR)/, $(SRCNAME:.cpp=.o))
OBJDIR		= build

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
