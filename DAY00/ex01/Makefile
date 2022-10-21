# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 06:37:43 by zrabhi            #+#    #+#              #
#    Updated: 2022/10/21 07:03:22 by zrabhi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLUE 	:= \033[1;34m
SRC 	:= Phonebook.cpp Phonebook_utils.cpp 
OBJ 	:= $(SRC:.cpp=.o)
CC 		:= c++
RM 		:= rm -f
FLAGS := -Wall -Wextra -Werror -std=c++98 
NAME = phonebook

all: $(NAME)
	@echo " $(BLUE)Creating Phonebook...$(BLUE)"

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(OBJ)
	@echo " $(BLUE)Removing obj...$(BLUE)"

fclean: clean
	@$(RM) $(NAME)
	@echo " $(BLUE)Removing Phonebook && obj...$(BLUE)"

re: fclean all
