#include <stdio.h>

void displaySize(char *typeName, size_t size) {
    printf("Size of %s: %zu bytes\n", typeName, size);
}

int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    displaySize("int", sizeof(intType));
    displaySize("float", sizeof(floatType));
    displaySize("double", sizeof(doubleType));
    displaySize("char", sizeof(charType));

    return 0;
}
