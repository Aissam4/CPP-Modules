# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 16:06:47 by abarchil          #+#    #+#              #
#    Updated: 2022/03/23 17:22:14 by abarchil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILE = Phone_Book.cpp Encapsulation.cpp

OBJ_FILE = $(SRC_FILE:.c=.o)

NAME = PhoneBook

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
