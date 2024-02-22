#include "auxiliar.h"

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