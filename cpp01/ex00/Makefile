# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/21 22:44:18 by jaejeong          #+#    #+#              #
#    Updated: 2022/05/03 02:00:59 by jaejeong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98 -Iincludes
NAME		= zombie
SRCNAME 	= main.cpp \
			  Zombie.cpp \
			  newZombie.cpp \
			  randomChump.cpp
SRCS		= $(addprefix $(SRCDIR)/, $(SRCNAME))
SRCDIR		= srcs
OBJS		= $(addprefix $(OBJDIR)/, $(SRCNAME:.cpp=.o))
OBJDIR		= build

$(NAME)		: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

all			: $(NAME)

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
