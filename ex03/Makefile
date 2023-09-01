# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 15:56:32 by mparasku          #+#    #+#              #
#    Updated: 2023/09/01 16:06:12 by mparasku         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon
FLAG = -std=c++98

SRC = main.cpp HumanA.cpp Weapon.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(SRC)
	c++ -Wall -Wextra -Werror $(FLAG) $(OBJ) -o $(NAME) 

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -fr $(NAME)