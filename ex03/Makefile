NAME = police
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Bureaucrat.cpp main.cpp AForm.cpp  \
		PresidentialPardonForm.cpp RobotomyRequestAForm.cpp \
		ShrubberyCreationForm.cpp 
OBJ = $(SRC:.cpp=.o) 
HEADERS = Bureaucrat.hpp AForm.hpp  \
		PresidentialPardonForm.hpp RobotomyRequestAForm.hpp \
		ShrubberyCreationForm.hpp 

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re