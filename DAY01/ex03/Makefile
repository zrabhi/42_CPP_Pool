# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 21:24:16 by zrabhi            #+#    #+#              #
#    Updated: 2022/10/25 14:25:01 by zrabhi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


BLUE 	:= \033[1;34m
SRC 	:= HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJ		:= $(SRC:.cpp=.o)
CC 		:= c++
RM 		:= rm -f
FLAGS	:= -Wall -Werror -Wextra -std=c++98
HEADER	:= Weapon.hpp
NAME	:= Weapon


all: $(NAME)
	@echo "$(BLUE)Weapon Created succesfully...$(BLUE)"

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ)
	@echo " $(BLUE)Removing obj...$(BLUE)"

fclean : clean
	@echo " $(BLUE)file removed succesfully$(BLUE)"
	@$(RM) $(NAME)

re : fclean all