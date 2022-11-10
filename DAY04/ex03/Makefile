# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 11:22:10 by zrabhi            #+#    #+#              #
#    Updated: 2022/11/10 20:08:12 by zrabhi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLUE 	:= \033[1;34m
SRC 	:= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp
CC 		:= c++
RM 		:= rm -f
OBJ		:= $(SRC:%.cpp=%.o)
FLAG	:= -Wall -Werror -Wextra -std=c++98
NAME 	:= Brain
HEADERS := Animal.hpp Cat.hpp Dog.hpp WrongCat.hpp WrongAnimal.hpp Brain.hpp

all: $(NAME)
	@echo " $(BLUE)Creating Brain...$(BLUE)"

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