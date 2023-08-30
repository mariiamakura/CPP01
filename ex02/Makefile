NAME = main
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(SRCS)
	c++ $(CFLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean 
	rm -f $(NAME)

re : fclean all