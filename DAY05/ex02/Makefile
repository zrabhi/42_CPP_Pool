# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 02:30:06 by zrabhi            #+#    #+#              #
#    Updated: 2022/11/16 00:01:41 by zrabhi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLUE 	:= \033[1;34m 
PRL 	:= Presidential
RBT 	:= Robotomy
SHR 	:= Shrubbery
SRC 	:= Bureaucrat.cpp main.cpp Form.cpp $(PRL)/PresidentialPardonForm.cpp $(RBT)/RobotomyRequestForm.cpp $(SHR)/ShrubberyCreationForm.cpp
CC 		:= c++ 
RM 		:= rm -f
OBJ		:= $(SRC:%.cpp=%.o)
FLAG	:= -Wall -Werror -Wextra -std=c++98
NAME 	:= CreationForm
FILE = Shrubbery_shrubbery
HEADERS := Bureaucrat.hpp Form.hpp $(PRL)/PresidentialPardonForm.hpp $(RBT)/RobotomyRequestForm.hpp $(SHR)/ShrubberyCreationForm.hpp

all: $(NAME)
	@echo " $(BLUE)Creating CreationForm...$(BLUE)"

$(NAME) : $(OBJ)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

%.o: %.cpp $(HEADERS)
	@$(CC) $(FLAG) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@$(RM) $(FILE)
	@echo " $(BLUE)Removing obj...$(BLUE)"
	
fclean : clean
	@echo " $(BLUE)file removed succesfully$(BLUE)"
	@$(RM) $(NAME)
	
re : fclean all