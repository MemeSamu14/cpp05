NAME = trhowyourself

HEADERS = AForm.hpp ShrubberyCreationForm.hpp Bureaucrat.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp

CC = c++
CFLAGS = -Wall -Werror -Wextra -g -std=c++98

SRC = main.cpp AForm.cpp ShrubberyCreationForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp

all: $(NAME) 

$(UTILS):
	$(MAKE) -C $(UTILS_DIR)

$(NAME): $(HEADERS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)

.PHONY: all clean fclean re

