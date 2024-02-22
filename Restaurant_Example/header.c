#include "header.h"

int chooseOption(){ // Returns an integer which is the selection from the user.
    
    int selection;

    /* do while, this loop runs the selection option at least once
    and repeats it in case the user types an invalid number.*/

    do{
        selection = printMenu(); // calls in the selection which is done within the function printMenu();

        if (selection<1 || selection > 5){ // If the input is out of range, then say it is invalid. || = OR
            printf("\nInvalid option!\n");
        }
    } while(selection<1 || selection > 5);
    return selection;
}

int printMenu(){ //Prints the menu and gets the choice from the user returning an integer.

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
