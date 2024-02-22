#include <stdio.h>
#include "header.h"

/* In this example, I am not runnign scanf as it was causing some overflow issues
The next option is to use the function fgetc(). To use this function, follow the example:

char user_input;
user_input = fgetc(stdin);
stdin tells the computer to read from the keyboard.
*/

int main(){

    int option;         // Variable to store an integer for the option typed by the user
    char confirmation;  // Variable to store 'y' (yes) or 'n' (no) from the user to confirm their menu choice

    option = chooseOption(); // option will be equal to the result returned by the function chooseOption()
    
    confirmChoice(option); // The function confirm choice is a void function, but requires the client's option as input to confirm
    fgetc(stdin); // Necessary to avoid the \n character to interfere with the next input
    printf("\nWould you like to proceed? (y or n): " );
    
    confirmation = fgetc(stdin); // Confirmation needed, get user input, y or n?
    
    while(confirmation != 'y'){     // While loop, while confirmation is not YES, keep running
        if (confirmation == 'n'){ // There are only two options, yes or no, if the user types another character,
                                  // it is an invalid option, so ask for a valid input again.
            printf("\nPlease choose a new option: ");
            
            option = chooseOption();
            // fgetc(stdin);
            confirmChoice(option);
            fgetc(stdin); // Once again, I was having issues with the Enter (\n) being taken to the next input read.
            printf("\n Would you like to proceed? (y or n): " );

            
            confirmation = fgetc(stdin);
            fgetc(stdin); // Once again, I was having issues with the Enter (\n) being taken to the next input read.
        } else{
            printf("Invalid option, type only y or n, for yes or no: ");
            
            
            confirmation = fgetc(stdin);
            fgetc(stdin);
        }
    }

    if (option != 5){ // If the option is different from 5, user wants to leave, present this message
        printf("\nYour meal is being prepared. Press Enter to exit...\n");
    } else{ //otherwise, present this other one.
        printf("\nThank you for coming, safe travels! Press Enter to exit...\n");
    }
    
    confirmation = '\0'; // I tell the program that confirmation is the NULL character, just to make sure...
    confirmation = fgetc(stdin); // Then I ask for the user input before exiting. As the varialbe isn't used anymore,
                                 // I just save the result in it.
    

    return 0;

}
