# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 06:20:23 by zrabhi            #+#    #+#              #
#    Updated: 2022/10/24 01:20:55 by zrabhi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLUE 	:= \033[1;34m
SRC 	:= main.cpp Zombie.cpp
OBJ		:= $(SRC:.cpp=.o)
CC 		:= c++
RM 		:= rm -f
FLAGS	:= -Wall -Werror -Wextra -std=c++98
NAME	:= zombieHorde


all: $(NAME)
	@echo "$(BLUE)zombieHorde Created succesfully...$(BLUE)"

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ)
	@echo " $(BLUE)Removing obj...$(BLUE)"

fclean : clean
	@echo " $(BLUE)file removed succesfully$(BLUE)"
	@$(RM) $(NAME)

re : fclean all