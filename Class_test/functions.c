#include "functions.h"

int calculateDays(int iMonth,int iYear,int fMonth,int fYear){

	int result, mm, yy;

	mm = fMonth-iMonth; // Difference in months

	yy = fYear-iYear; // Difference in yearrs

	yy = yy*12; // Converts difference in years to months

	result = (mm+yy)*30; // Adds them together and multiply by 30 days in a month

	return result;

}


