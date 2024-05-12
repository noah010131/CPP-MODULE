NAME = play
G++ = g++
FLAG = -std=c++11

SRC = marine.cpp play.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
			$(G++) $(FLAG) -o $@ $^

$(OBJ): %.o: %.cpp
			$(G++) $(FLAG) -o $@ -c $<

clean :
		rm -f $(OBJ)
fclean : clean
		rm -f $(NAME)
re : fclean all

.PHONY : all clean fclean re
