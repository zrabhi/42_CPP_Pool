# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 01:28:02 by zrabhi            #+#    #+#              #
#    Updated: 2022/10/24 01:33:12 by zrabhi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLUE 	:= \033[1;34m
SRC		:= main.cpp
OBJ		:= $(SRC:.cpp=.o)
CC		:= c++
RM 		:= rm -f
FLAGS	:= -Wall -Wextra -Werror -std=c++98
NAME	:= ref

all : $(NAME)
	@echo " $(BLUE)Creating megaphone...$(BLUE)"

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re     : fclean all	