/******************************************************************************

Euclidian Algorithm to calculate the Greatest Common Sivider between X and Y, where
X > Y and Y !=0.

1 - Divide X/Y, if the reminder (R1) is 0, the GCD is Y
2 - If R1 != 0, divide Y/R1, if the reminder (R2) is 0, the GCD is R1
3 - If R2 != 0, divide R1/R2, if the reminder (R3) is 0, the GCD is R2
4 - If Rn != 0, divide (Rn-1)/(Rn), if the reminder (Rn+1) is 0, the GCD is Rn
*******************************************************************************/
#include <stdio.h>
#include "auxiliar.h"

int main(){
    
    int X, Y, GCD, oX, oY;
    

    
    do{
        
        printf("Choose two numbers to calculate the MDC, X and Y, where X > Y and Y!= 0: ");
        scanf("%d %d",&X,&Y);
        
    }while((X<Y) || Y < 1);
    
    oX = X;
    oY = Y;
    
    GCD = calculateMDC(X,Y);
    
    printf("\nThe MDC between %d and %d is %d",oX,oY,GCD);
    
    getchar();
    getchar();
    
    return 0;
    
}