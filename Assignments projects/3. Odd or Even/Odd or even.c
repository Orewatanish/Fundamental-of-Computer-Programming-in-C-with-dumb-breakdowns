#include <stdio.h> //include header library 
#include <math.h> //include header library for math operations

//code begins
int main() {
	
	//declaring a variable
	double a;// the number we need to check if it's even or odd
	double b;// it would be reminder for a/2 
	
	//ask for a number gets it and store it in a variable
	printf("Enter a number: ");
	scanf("%lf", &a);//gets the input from user and save it in 'a'

	//checking even or odd
	/*we use basic property to find if its even or not 
	i.e even number when divided by 2 gives us reminder 0
	by using this rule we will make it crazy answer*/
	b = fmod(a, 2) ; // by modulus operator we simply get the reminder 
	
	//printing output by simply varifying condn 
	if(b == 0){
		printf("%.2lf is even", a);
	} 
	else{
		printf("%.2lf is odd", a);
	}
	
	// terminate program successfully
	return 0;
}