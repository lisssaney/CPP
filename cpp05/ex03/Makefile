NAME = intern

CC = clang++

CFLAGS = -Wall -Wextra -Werror
FILE = home_shrubbery 

SRC = Bureaucrat.cpp \
	Form.cpp \
	PresidentialPardonForm.cpp \
	RobotomyRequestForm.cpp \
	ShrubberyCreationForm.cpp \
	Intern.cpp \
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
	@rm -f $(FILE)

re: fclean all

.PHONY: clean fclean re 