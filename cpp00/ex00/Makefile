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