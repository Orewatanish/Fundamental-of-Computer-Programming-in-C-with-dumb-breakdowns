#include <stdio.h>

/* Custom implementation using pointers to find end of dest and copy src */
char *my_strcat(char *dest, const char *src) {
    char *ptr = dest; // pointer to destination
    
    /* finding the end and move the pointer up */
    while (*ptr != '\0') { 
        ptr++; 
    }
    
    while (*src != '\0') { /* loop through source */
        *ptr++ = *src++; /* copy char and move pointers */
    }
    
    *ptr = '\0'; 
    return dest; /* return joined string */
}

int main() {
    char dest[200] = "Hello, "; // first string
    char src[] = "World!"; // second string

    printf("Before concatenation: dest = \"%s\"\n", dest); // print before
    my_strcat(dest, src); // call join function
    printf("After concatenation: dest = \"%s\"\n", dest); // print after

    return 0; // end program
}