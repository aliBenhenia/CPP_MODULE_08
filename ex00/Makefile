# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 22:08:55 by abenheni          #+#    #+#              #
#    Updated: 2024/03/26 20:03:33 by abenheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
CC = c++
RM = rm -f
OBJ_DIR = objects 
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  main.cpp 
OBJ = $(SRC:%.cpp=%.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ)  -o $(NAME) 
%.o : %.cpp easyfind.hpp
	$(CC) $(CFLAGS)  -c $< -o $@
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all