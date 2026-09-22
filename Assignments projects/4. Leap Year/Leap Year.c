//include imp library
#include <stdio.h>
#include <math.h>

// begin of code
int main() {
	
	//declare variable
	int year; //as year here cant be in decimal
	int r; //its remainder imp variable
	
	//gets the year from user stores it in variable
	printf("Enter the year to varify: ");
	scanf("%d", &year);
	
	//logic building
	/* here leap year is count to be divisble by 4  where as theres expection 
	as a century year with '00' are divisible by 4 for ex 1900 can bypass it,
	which arent leap year to bypass it.
	*/
	if(year % 400 == 0){
		/*if we get the year in this range it would be leap and stop code here itself
		or else countinues if user selected different year */ 
		printf("%d is a leap year ", year);
	}
	else if(year % 100 == 0){
		/*if we get the year in this range it would be leap and stop code here itself
		or else countinues if user selected different year */
		printf("%d is not a leap year", year);
	}
	else if(year % 4 == 0){
		//final thing we take out leap years with basic 4
		printf("%d is a leap year", year);
	}
	else{
		//and left with normal years
		printf("%d is not a leap year", year);
	}
	
	//ends program
	return 0;
}