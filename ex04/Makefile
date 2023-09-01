
NAME = replace
FLAG = -std=c++98

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(SRC)
	c++ -Wall -Wextra -Werror $(FLAG) $(OBJ) -o $(NAME) 
re : fclean all
clean:
	@rm -rf $(OBJ)
	@rm -f *.replace

fclean: clean
	@rm -fr $(NAME)