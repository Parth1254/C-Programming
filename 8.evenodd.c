#include <stdio.h>

void checkEvenOrOdd(int num) {
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    checkEvenOrOdd(num);

    return 0;
}
