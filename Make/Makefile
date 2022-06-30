all:client del

client:client.o log.o
	gcc -o client client.o log.o  

del:
	del *.o

client.o: ../client/client.c
	gcc -c ../client/client.c -o client.o

log.o:../bin/code/log.c
	gcc -c ../bin/code/log.c -o log.o
	




clean:
	del *.o

.PHONY:clean