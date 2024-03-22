CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRC = main.cpp \
	  Zombie.cpp \
	  zombieHorde.cpp

OBJ  = $(SRC:.cpp=.o)

NAME = zombie

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re