#include<stdio.h>
#include<string.h>

int main(int argc,char **argv){
	
	printf("Hello World!\n");
	char argument[10];

	strcpy(argument,argv[1]);

	printf("%s was typed.\n",argument);


	return 0;

}

