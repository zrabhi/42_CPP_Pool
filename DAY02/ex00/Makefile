
BLUE 	:= \033[1;34m
SRC 	:= main.cpp Fixed.cpp
OBJ		:= $(SRC:.cpp=.o)
CC 		:= c++
RM 		:= rm -f
FLAGS	:= -Wall -Werror -Wextra -std=c++98
NAME 	:= Fixed

all: $(NAME)
	@echo " $(BLUE)Creating Fixed...$(BLUE)"

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
	