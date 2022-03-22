# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 16:06:47 by abarchil          #+#    #+#              #
#    Updated: 2022/02/22 16:22:58 by abarchil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILE = megaphone.cpp
OBJ_FILE = $(SRC_FILE:.c=.o)
NAME = megaphone
CC = c++
FLAGS = -Wall -Wextra -Werror
all: $(NAME)
%.c:%.o
	$(CC) $(FLAGS) -c $< -o $@
$(NAME) : $(OBJ_FILE)
	$(CC) $(FLAGS) $(OBJ_FILE) -o $(NAME)
clean :
	rm -rf $(NAME)
re : clean all
.PHONY : clean fclean re
