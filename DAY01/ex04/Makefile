# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zakaria <zakaria@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 15:23:18 by zrabhi            #+#    #+#              #
#    Updated: 2022/10/26 16:22:17 by zakaria          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLUE 	:= \033[1;34m
SRC 	:= main.cpp
OBJ		:= $(SRC:.cpp=.o)
CC 		:= c++
RM 		:= rm -f
FLAGS	:= -Wall -Werror -Wextra -std=c++98
NAME 	:= Sed

all: $(NAME)
	@echo " $(BLUE)Creating Sed...$(BLUE)"

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(OBJ)
	@$(RM) *.replace
	@echo " $(BLUE)Removing obj...$(BLUE)"
	
fclean : clean
	@echo " $(BLUE)file removed succesfully$(BLUE)"
	@$(RM) $(NAME)

re : fclean all
	