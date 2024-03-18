#include <stdio.h>

void swap(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    double first, second;
    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);

    swap(&first, &second);

    printf("\nAfter swapping, first number = %.2lf\n", first);
    printf("After swapping, second number = %.2lf", second);

    return 0;
}

