#include <stdio.h> 

/* program starts */
int main() { 

    char str[100]; /* string is created */

    int len = 0, i, isPalindrome = 1; 

    printf("Enter a string: "); 
    gets(str);

    while (str[len] != '\0') { 

        len++; /* count length */

    } 
    
	/* Check if its palindrome */
    for (i = 0; i < len / 2; i++) { 

        if (str[i] != str[len - i - 1]) { 
        
            isPalindrome = 0;

            break; /* exit loop */
		
        }
    } 

	/* telling if its a palindrome or not */
    if (isPalindrome) 
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0; /* end program */

} 
