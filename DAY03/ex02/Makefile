# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zakaria <zakaria@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 01:48:22 by zrabhi            #+#    #+#              #
#    Updated: 2022/11/08 02:30:48 by zakaria          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLUE 	:= \033[1;34m
SRC 	:= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ		:= $(SRC:.cpp=.o)
CC 		:= c++
RM 		:= rm -f
FLAGS	:= -Wall -Werror -Wextra -std=c++98
NAME 	:= FragTrap

all: $(NAME)
	@echo " $(BLUE)Creating FragTrap...$(BLUE)"

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(OBJ)
	@echo " $(BLUE)Removing obj...$(BLUE)"
	
fclean : clean
	@echo " $(BLUE)file removed succesfully$(BLUE)"
	@$(RM) $(NAME)

re : fclean all