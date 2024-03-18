#include <stdio.h>

void getInput(double *a, double *b) {
    printf("Enter two numbers: ");
    scanf("%lf %lf", a, b);
}

double calculateProduct(double a, double b) {
    return a * b;
}

void displayResult(double product) {
    printf("Product = %.2lf\n", product);
}

int main() {
    double a, b, product;
    getInput(&a, &b);
    product = calculateProduct(a, b);
    displayResult(product);
    return 0;
}
