CC = g++
CFLAGS = -Wall -std=c++11 -lboost_program_options -fstack-protector-all -D_FORTIFY_SOURCE=2 -O -fsanitize=address -fsanitize=undefined
NAME = Morser
SRCS = $(wildcard src/*.cpp)

all: $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@   

clean : 
	rm $(NAME)

re : clean all 
