# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 09:19:41 by zrabhi            #+#    #+#              #
#    Updated: 2022/11/17 13:58:52 by zrabhi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


BLUE 	:= \033[1;34m
SRC 	:= Scalar.cpp main.cpp
CC 		:= c++
RM 		:= rm -f
OBJ		:= $(SRC:%.cpp=%.o)
FLAG	:= -Wall -Werror -Wextra -std=c++98
NAME 	:= Scalar
HEADERS := Scalar.hpp

all: $(NAME)
	@echo " $(BLUE)Creating Scalar...$(BLUE)"

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