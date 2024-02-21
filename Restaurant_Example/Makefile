CFLAGS = -Wno-implicit-function-declaration

all: Restaurant

Restaurant: main.o header.o
	echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o header.o -o Restaurant

main.o: main.c
	echo "Compiling main"
	gcc $(CFLAGS) -c main.c

header.o: header.c
	echo "compiling header"
	gcc $(CFLAGS) -c header.c


clean:
	echo "Removing temporary files"
	rm *.o

clean_all:
	echo "Removing all files"
	rm *.o Restaurant