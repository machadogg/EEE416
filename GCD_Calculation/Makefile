CFLAGS = -Wno-implicit-function-declaration

all: final

final: auxiliar.o main.o 
	echo "Linking and producing the final application"
	gcc $(CFLAGS) auxiliar.o main.o  -o final

main.o: main.c
	echo "Compiling main"
	gcc $(CFLAGS) -c main.c

auxiliar.o: auxiliar.c
	echo "compiling auxiliar"
	gcc $(CFLAGS) -c auxiliar.c


clean:
	echo "Removing temporary files"
	rm *.o

clean_all:
	echo "Removing all files"
	rm *.o final