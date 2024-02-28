CFLAGS = -Wno-implicit-function-declaration

all: final

final: functions.o main.o 
	echo "Linking and producing the final application"
	gcc $(CFLAGS) functions.o main.o -o final

main.o: main.c
	echo "Compiling main"
	gcc $(CFLAGS) -c main.c

functions.c.o: functions.c
	echo "compiling functions"
	gcc $(CFLAGS) -c functions.c


clean:
	echo "Removing temporary files"
	rm *.o

clean_all:
	echo "Removing all files"
	rm *.o final
