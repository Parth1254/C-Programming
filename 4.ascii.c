#include <stdio.h>

void getCharInput(char *c) {
    printf("Enter a character: ");
    scanf(" %c", c);
}

void displayASCII(char c) {
    printf("ASCII value of %c = %d\n", c, c);
}

int main() {  
    char c;
    
    getCharInput(&c);
    displayASCII(c);
    
    return 0;
}
