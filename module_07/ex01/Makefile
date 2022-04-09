# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 20:30:33 by abarchil          #+#    #+#              #
#    Updated: 2022/04/09 04:51:03 by abarchil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILE = main.cpp

OBJ_FILE = $(SRC_FILE:.cpp=.o)

NAME = Template_V2

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