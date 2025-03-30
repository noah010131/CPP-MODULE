NAME= FragTrap
FLAG= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ= $(SRC:.cpp=.o)
all : $(NAME)

$(NAME): $(OBJ)
			c++ $(FLAG) -o $@ $^

$(OBJ): %.o: %.cpp
	c++ $(FLAG) -o $@ -c $<

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re