#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


int main(){

	int iMonth, iYear, fMonth, fYear, total_days, total_months; // Initial Month and Year, final Month and Yeear
    
    int daysMonth = 30;

    double *totalCases; 
    double *totalDeaths, *totalRecover;

    int iCases = 10; // Initial cases

    /*  Each chicken spreads to 3 other chickens every day
        90% recover after 1 day after getting the virus, the rest dies

        Prints: Total number of cases, deaths and recovers for each month
        in between the dates
    */

    do{
    printf("Please enter the month and year of the first reported case of chicken virus: ");
    scanf("%d %d",&iMonth, &iYear);
    
    if(iMonth<1 || iMonth >12){
      printf("\nInvalid month number\n");
    }
  } while((iMonth<1 || iMonth >12));

    printf("You have entered: %d/%d.",iMonth,iYear);
    
    do{
        printf("\n\nPlease enter the month and year for the prediction. \nYear must be equal or greater the the first reported case: ");
        scanf("%d %d",&fMonth, &fYear);
    if(fMonth<1 || fMonth >12){
      printf("\nInvalid month number\n");
    }
    } while(fYear < iYear || fMonth<1 || fMonth >12);
    
    total_days = calculateDays(iMonth,iYear,fMonth,fYear); // Goes into the function calculate days to get the number of days between months
    total_months = total_days/daysMonth; // Then gets the number of days

    totalCases = (double *)malloc(total_days * sizeof(double)); // Allocates the memory for the array, each element contains number of cases for each day
    totalDeaths = (double*)malloc(total_days * sizeof(double)); // Same as above for the number of dead chickens every day
    totalRecover = (double*)malloc(total_days * sizeof(double));// Same as above for the number of recovered chickens every day
    
    totalCases[0] = iCases;
    totalDeaths[0] = 0; // Chicken just got sick, no chicken has recoverd on day 0
    totalRecover[0] = 0; // Chicken just got sick, no chicken has died on day 0

    printf("\nYou have entered: %d/%d. Calculating over a period of %d days (%d months).\n",fMonth,fYear,total_days,total_months);

    for(int i = 1; i < total_days ; i++){

        

        totalRecover[i] = .9*totalCases[i-1]; // 90% of the chickens recover

        totalDeaths[i] = 0.1*totalCases[i-1]; // 10% of the chickens die
        totalCases[i] = totalCases[i-1]*4 - totalRecover[i]; // Each chicken spreads to 3 (3+1 originally infected) = 4
                                                             // Then removes the total number of recovered chickens
    }

    // Prints the statistics for each month 
    for(int i = 0; i < total_months; i++){

        printf("\n\nStatistics for month #%d.\n",i+1);
        printf("\nInfected chickens: %.1f .\n",totalCases[29+i*30]);
        printf("\nRecovered chickens: %.1f.\n",totalRecover[29+i*30]);
        printf("\nDeceased chickens: %.1f.\n",totalDeaths[29+i*30]);
    }
    
    // frees the memory
    free(totalCases);
    free(totalDeaths);
    free(totalRecover);


    getchar();
    getchar();

    return 0;
	
}
