all:run/client

run/client:make_o/client.o make_o/log.o 
	gcc -o run/client make_o/client.o make_o/log.o  

make_o/client.o: client/client.c
	gcc -c client/client.c -o make_o/client.o

make_o/log.o:bin/code/log.c
	gcc -c bin/code/log.c -o make_o/log.o