all:run/client

run/client:make_o/client.o make_o/log.o make_o/register.o 
	gcc -o run/client make_o/client.o make_o/log.o make_o/register.o -llua54

make_o/client.o: client/code/client.c
	gcc -c client/code/client.c -o make_o/client.o -llua54

make_o/log.o:bin/code/log.c
	gcc -c bin/code/log.c -o make_o/log.o -llua54

make_o/register.o:bin/code/register.c
	gcc -c bin/code/register.c -o make_o/register.o -llua54