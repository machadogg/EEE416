CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o
	echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o -o final

main.o: main.c
	echo "Compiling main"
	gcc $(CFLAGS) -c main.c

#funcs.o: funcs.c
#	echo "compiling funcs"
#	gcc $(CFLAGS) -c funcs.c


clean:
	echo "Removing temporary files"
	rm *.o

clean_all:
	echo "Removing all files"
	rm *.o final