G++ = g++
FLAG = -std=c++11

SRC_M = marine.cpp play_marine.cpp
SRC_PC = photon_cannon.cpp play_pc.cpp
OBJ_M = $(SRC_M:.cpp=.o)
OBJ_PC = $(SRC_PC:.cpp=.o)

all: play_marine play_pc

play_marine: $(OBJ_M)
			$(G++) $(FLAG) -o $@ $^

play_pc: $(OBJ_PC)
			$(G++) $(FLAG) -o $@ $^

.c.o:
		$(G++) $(FLAGS) -cpp -o $@ $<

clean :
		rm -f $(OBJ_M) $(OBJ_PC)
fclean : clean
		rm -f play_marine play_pc
re : fclean all

.PHONY : all clean fclean re
