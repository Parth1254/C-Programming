#include <stdio.h>

void getDividendAndDivisor(int *dividend, int *divisor) {
    printf("Enter dividend: ");
    scanf("%d", dividend);
    printf("Enter divisor: ");
    scanf("%d", divisor);
}

void computeQuotientAndRemainder(int dividend, int divisor, int *quotient, int *remainder) {
    *quotient = dividend / divisor;
    *remainder = dividend % divisor;
}

void displayResults(int quotient, int remainder) {
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
}

int main() {
    int dividend, divisor, quotient, remainder;
    
    getDividendAndDivisor(&dividend, &divisor);
    computeQuotientAndRemainder(dividend, divisor, &quotient, &remainder);
    displayResults(quotient, remainder);
    
    return 0;
}
