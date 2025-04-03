CC = cc
#CFLAGS = -g -Wall -Wextra -Werror -L. -lpthread -g3 -fsanitize=thread -O3 -march=native
CFLAGS = -Wall -Wextra -Werror
NAME = philo

SRC = main.c init.c utils.c routines.c actions.c checkers.c	 

OBJ = $(SRC:.c=.o)

all: $(NAME)
	@echo "\033[0;32mSuccess!\033[0m"
	
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -pthread $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)
	@echo "\033[0;31mObjects deleted!\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;31mAll clean!\033[0m"

re: fclean all
