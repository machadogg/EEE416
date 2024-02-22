#include "auxiliar.h"

void getNumbers(int *BigNumber, int *SmallNumber){
    
    do{
        
        printf("\nChoose two numbers to calculate the GCD, where the first is greater than the second, and the second is !=0: ");
        scanf("%d %d",BigNumber,SmallNumber);
        
    }while((*BigNumber < *SmallNumber) || *SmallNumber == 0);
    
}

int calculateGCD(int X, int Y){
    
    int Remind, GCD;
    
    Remind = 1; // Any number different from 0
    
    while(Remind != 0){
        
        Remind = X%Y;
        GCD = Y;
        X = Y;
        Y = Remind;
        
    }
    
    return GCD;
}