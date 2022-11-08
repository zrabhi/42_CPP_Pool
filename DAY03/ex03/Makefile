# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 05:33:52 by zrabhi            #+#    #+#              #
#    Updated: 2022/11/08 18:38:06 by zrabhi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLUE 	:= \033[1;34m
SRC 	:= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
CC 		:= c++
RM 		:= rm -f
OBJ		:= $(SRC:.cpp=.o)
FLAGS	:= -Wall -Werror -Wextra -Wshadow  -Wno-shadow -std=c++98
NAME 	:= DiomandTrap

all: $(NAME)
	@echo " $(BLUE)Creating DiomandTrap...$(BLUE)"

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)


clean:
	@$(RM) $(OBJ)
	@echo " $(BLUE)Removing obj...$(BLUE)"
	
fclean : clean
	@echo " $(BLUE)file removed succesfully$(BLUE)"
	@$(RM) $(NAME)
	
re : fclean all