# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 16:53:38 by abarchil          #+#    #+#              #
#    Updated: 2022/03/29 16:44:06 by abarchil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILE = main.cpp Fixed.cpp

OBJ_FILE = $(SRC_FILE:.cpp=.o)

NAME = Orthodox

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all:$(NAME)
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