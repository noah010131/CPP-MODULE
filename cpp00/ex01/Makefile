NAME= phonebook
FLAG=  -Wall -Wextra -Werror -std=c++98
SRC= PhoneBook.cpp Contact.cpp main.cpp
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