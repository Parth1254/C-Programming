#include <stdio.h>

double findLargest(double n1, double n2, double n3) {
    if (n1 >= n2 && n1 >= n3)
        return n1;
    else if (n2 >= n1 && n2 >= n3)
        return n2;
    else
        return n3;
}

int main() {
    double n1, n2, n3;
    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    double largest = findLargest(n1, n2, n3);
    printf("%.2f is the largest number.\n", largest);

    return 0;
}
