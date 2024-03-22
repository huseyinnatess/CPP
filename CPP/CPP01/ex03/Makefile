CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRC = main.cpp \
	  HumanA.cpp \
	  HumanB.cpp \
	  Weapon.cpp

OBJ  = $(SRC:.cpp=.o)

NAME = human

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re