CC      = g++
LIBS    = -lboost_system -lboost_thread -pthread -fstack-protector-all -D_FORTIFY_SOURCE=2

all: server client

server : obj/server.o
	$(CC) $(LDFLAGS) $(LIBS) obj/server.o -o $@

client : obj/client.o
	$(CC) $(LDFLAGS) $(LIBS) obj/client.o -o $@ 

obj/client.o : src/client.cpp
	$(CC) $(LDFLAGS) $(LIBS) -c src/client.cpp -o $@ 

obj/server.o : src/server.cpp
	$(CC) $(LDFLAGS) $(LIBS) -c src/server.cpp -o $@ 

.PHONY: all clean fclean re

clean:
	rm -f obj/*.o
	rm -f server client

fclean: clean

re: fclean all
