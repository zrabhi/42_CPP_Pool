# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 00:21:06 by zrabhi            #+#    #+#              #
#    Updated: 2022/10/18 03:46:46 by zrabhi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


BLUE 	:= \033[1;34m
SRC 	:= megaphone.cpp
OBJ		:= $(SRC:.c=.o)
FLAGS	:= c++ -Wall -Werror -Wextra -std=c++98
NAME 	:= megaphone

all: $(NAME)
	@echo " $(BLUE)compiling && linking ....$(BLUE)"

$(NAME) : $(OBJ)
	@$(FLAGS) $(SRC) -o $(NAME)

fclean :
	@echo " $(BLUE)file removed succesfully$(BLUE)"
	@rm -rf $(NAME)
re : fclean all
	