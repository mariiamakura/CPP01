# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 19:13:01 by mparasku          #+#    #+#              #
#    Updated: 2023/09/01 19:21:46 by mparasku         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
FLAG = -std=c++98

SRC = main.cpp Harl.cpp
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