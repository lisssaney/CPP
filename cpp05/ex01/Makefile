NAME = form

CC = clang++

CFLAGS = -Wall -Wextra -Werror


SRC = Bureaucrat.cpp \
	Form.cpp \
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