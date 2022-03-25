# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 16:53:38 by abarchil          #+#    #+#              #
#    Updated: 2022/03/25 17:06:31 by abarchil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILE = main.cpp HumanA.cpp HumanB.cpp Weapon.hpp

OBJ_FILE = $(SRC_FILE:.c=.o)

HEADER = Zombie.hpp
 
NAME = Violence

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
%.c:%.o
	$(CC) $(FLAGS) -c $< -o $@
$(NAME) : $(OBJ_FILE)
	$(CC) $(FLAGS) $(OBJ_FILE) -o $(NAME)
fclean :
	rm -rf $(NAME)
re : fclean all
.PHONY : clean fclean re