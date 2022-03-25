# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 01:31:47 by abarchil          #+#    #+#              #
#    Updated: 2022/03/25 16:56:14 by abarchil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC_FILE = main.cpp newZombie.cpp Zombie.cpp randomChump.cpp

OBJ_FILE = $(SRC_FILE:.c=.o)

HEADER = Zombie.hpp
 
NAME = Brainz

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
