#include "auxiliar.h"


void getNumbers(int *BigNum, int *SmallNum){

    do{
        
        printf("Choose two numbers to calculate the MDC, X and Y, where X > Y and Y!= 0: ");
        scanf("%d %d",BigNum,SmallNum);
        
    }while((*BigNum<*SmallNum) || *SmallNum < 1);

}


int calculateMDC(int BigNum, int SmallNum){
    
    int Remind = 1;
    
    int GCD;
    
    
    while(Remind != 0){
        
        Remind = BigNum%SmallNum;
        GCD = SmallNum;
        BigNum = SmallNum;
        SmallNum = Remind;
        
    }
    
    return GCD;
    
}