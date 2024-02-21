#include <stdio.h>
#include "header.h"


int main(){

    int option;
    char confirmation;

    option = chooseOption();
    fgetc(stdin);
    confirmChoice(option);
    fgetc(stdin);
    printf("\nWould you like to proceed? (y or n): " );
    
    confirmation = fgetc(stdin);
    
    while(confirmation != 'y'){
        if (confirmation == 'n'){
            
            printf("\nPlease choose a new option: ");
            
            option = chooseOption();
            fgetc(stdin);
            confirmChoice(option);
            fgetc(stdin);
            printf("\n Would you like to proceed? (y or n): " );

            
            confirmation = fgetc(stdin);
            fgetc(stdin);
        } else{
            printf("Invalid option, type only y or n, for yes or no: ");
            
            
            confirmation = fgetc(stdin);
            fgetc(stdin);
        }
    }

    printf("\nYour meal is being prepared. Press Enter to exit...\n");
    
    confirmation = '\0';
    confirmation = fgetc(stdin);
    fgetc(stdin);

    return 0;

}
