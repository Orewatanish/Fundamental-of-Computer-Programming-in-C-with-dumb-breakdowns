#include <stdio.h>

/* program begins here */
int main() {
	
	char str[100];/* str[num] is the size of the string */

    int len; /* decide the length of people */

    printf("Enter a string: ");

    gets(str); /*read the string*/

	/* loops untill we find string end */
    while (str[len] != '\0') { 

        len++;

    }
    
	/* prints the answer */
    printf("Length of the string is %d!\n", len);

    return 0;
    /* end the programm */
}
