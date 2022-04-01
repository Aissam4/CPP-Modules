# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 16:53:38 by abarchil          #+#    #+#              #
#    Updated: 2022/04/01 17:36:25 by abarchil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILE = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ_FILE = $(SRC_FILE:.cpp=.o)

HEADER = Zombie.hpp
 
NAME = FragTrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

all: $(NAME)
%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@
$(NAME) : $(OBJ_FILE)
	$(CC) $(FLAGS) $(OBJ_FILE) -o $(NAME)
clean :
	rm -rf $(OBJ_FILE)
fclean :
	rm -rf $(OBJ_FILE) $(NAME)
re : fclean all
.PHONY : clean fclean re