# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 15:09:44 by jaejeong          #+#    #+#              #
#    Updated: 2022/04/21 17:26:19 by jaejeong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98 -Iincludes
NAME		= PhoneBook
SRCNAME 	= main.cpp \
			  PhoneBook.cpp \
			  Contact.cpp
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
