#include "header.h"

int chooseOption(){
    
    int selection;

    

    do{
        selection = printMenu();

        if (selection<1 || selection > 5){
            printf("\nInvalid option!\n");
        }
    } while(selection<1 || selection > 5);
    return selection;
}

int printMenu(){

    int option;
    char op;
    printf("Menu:\n");
    printf("1 -Baked Buffalo Wings\n");
    printf("2 -Pulled Ribs\n");
    printf("3 -The MEGABURGER!!!!\n");
    printf("4 -Caesar Salad (really?)\n");
    printf("5 - Forget it, I am leaving...\n");
    printf("\nPlease select the number corresponding to your menu choice: ");
    
    op = fgetc(stdin);
    
    option = op - '0';
    printf("\n");
    return option;

}

void confirmChoice(int choice){

    switch (choice)
    {
    case 1:
        printf("You chose the Baked Buffalo Wings!\n");
        break;
    case 2:
        printf("You chose the Pulled Ribs!\n");
        break;
    case 3:
        printf("You have chosen... The MEGABURGER!!!! Be brave.\n");
        break;
    case 4:
        printf("Your choice... Caesar salad... ok...\n");
        break;
    case 5:
        printf("Thank you for coming, safe travels!\n");
        //statement 2
        // statement 3
        break;

    
    default:
        printf("Invalid Option!");
        break;
    }

}
