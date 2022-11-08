# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 00:35:00 by zrabhi            #+#    #+#              #
#    Updated: 2022/11/08 19:20:48 by zrabhi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC 	:= main.cpp ClapTrap.cpp ScavTrap.cpp
CC 		:= c++
RM 		:= rm -f
OBJ		:= $(SRC:%.cpp=%.o)
FLAG	:= -Wall -Werror -Wextra -Wshadow  -Wno-shadow -std=c++98
NAME 	:= ScavTrap
HEADERS := ClapTrap.hpp ScavTrap.hpp 
all: $(NAME)
	@echo " $(BLUE)Creating ScavTrap...$(BLUE)"

$(NAME) : $(OBJ)
	$(CC) $(FLAG) $(SRC) -o $(NAME)
%.o: %.cpp $(HEADERS)
	@$(CC) $(FLAG) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@echo " $(BLUE)Removing obj...$(BLUE)"
	
fclean : clean
	@echo " $(BLUE)file removed succesfully$(BLUE)"
	@$(RM) $(NAME)
	
re : fclean all