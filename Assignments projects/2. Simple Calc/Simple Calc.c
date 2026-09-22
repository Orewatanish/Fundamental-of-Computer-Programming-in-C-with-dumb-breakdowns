#include <stdio.h>// includes header library

// Beginning of the programm
int main(){

	// Determine the variables
	char o;// operators (+,-,*,/)
	double a;// will store the first digit
	double b;// will store the secound digit
	double c;// this will store the solution
	
	// Taking inputs from the user
	printf("Enter First number:");
	scanf("%lf", &a);// gets user input and stores value in a as decimal digit
	printf("Enter the Arthmatic Operator(+,-,*,/):");
	scanf(" %c", &o);//here the space before %c skips whitespaces
	// gets user input ,but stores operator in (only) single char
	printf("Enter Secound number:");
	scanf("%lf", &b);// gets user input and stores value in b as decimal digit
	
	// The calculation part
	/* the whole thing for calculation would be based on simple loops.
	here we would be check which operator did user choose by using switch
	a conditional statment so acoording to that we would perfore the 
	operation and assign the solution to the varible 'c'*/
	switch (o){
		case '+':// checks if it is +
			c = a + b;// performs addition and stores the value(ans) to c
			break;// gets out of the switch block
		case '-':// checks if it is -
			c = a - b;// performs substraction and stores the value(ans) to c
			break;// gets out of the switch block
		case '*':// checks if it is *
			c = a * b;// performs multiplication and stores the value(ans) to c
			break;// gets out of the switch block
		case '/':// checks if it is /
			//check if user had made mistake
			if (b == 0){
				printf("You can't divide by zero!\n");//reminding something to user 
				return 0;// end of the programm
			}
			else{
				c = a / b;// performs division and stores the value(ans) to c
				break;// gets out of the switch block
			}
	}
	// print output
	printf("the result is %.4lf ", c);
	// successful completion of code
	return 0;
}
