NAME = fragtrap

CC = clang++

CFLAGS = -Wall -Wextra -Werror


SRC = ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp \
	main.cpp \


OBJ = $(SRC:cpp=o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "\033[0mDone !"

%.o: %.cpp
	@${CC} ${CFLAGS} -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(OBJ)
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re 