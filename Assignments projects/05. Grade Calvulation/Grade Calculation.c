//include librarys
#include <stdio.h> 


int main() {
	
	// delcaring varibles
    float marks;

	// takes input from user and stores it in variable
    printf("Enter student marks (0 - 100): ");
    scanf("%f", &marks);

    // checks which range marks falls in
    if (marks < 0 || marks > 100) {
    	// should be in range or what use
        printf("Marks should be between 0 and 100.\n");
    } 
    // Grade classification ladder
    else if (marks >= 90) {
        printf("Calculated Grade: A+\n");
    } 
    else if (marks >= 80) {
        printf("Calculated Grade: A\n");
    } 
    else if (marks >= 70) {
        printf("Calculated Grade: B\n");
    } 
    else if (marks >= 60) {
        printf("Calculated Grade: C\n");
    } 
    else if (marks >= 50) {
        printf("Calculated Grade: D\n");
    } 
    else {
        printf("Calculated Grade: F\n");
    }

	// program ends 
    return 0; 
}
