/******************************************************************************

Euclidian Algorithm to calculate the Greatest Common Divider between X and Y, where
X > Y and Y !=0.

1 - Divide X/Y, if the reminder (R1) is 0, the GCD is Y
2 - If R1 != 0, divide Y/R1, if the reminder (R2) is 0, the GCD is R1
3 - If R2 != 0, divide R1/R2, if the reminder (R3) is 0, the GCD is R2
4 - If Rn != 0, divide (Rn-1)/(Rn), if the reminder (Rn+1) is 0, the GCD is Rn

In this example, we will practice the difference between do while, and while and
passing by value and passing by reference to a function.
*******************************************************************************/
#include <stdio.h>
#include "auxiliar.h"

int main(){
    
    int x, y, result;
    int original[2];
    
    getNumbers(&x, &y);
    
    original[0] = x;
    original[1] = y;
    
    result = calculateGCD(x,y);
    
    printf("The GCD between %d and %d is %d", original[0], original[1], result);
    
    getchar();
    getchar();
    
    return 0;
    
}

