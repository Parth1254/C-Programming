#include <stdio.h>
void getInput(int *number1, int *number2) {
    printf("Enter two integers: ");
    scanf("%d %d", number1, number2);
}

int calculateSum(int number1, int number2) {
    return number1 + number2;
}

void displayResult(int number1, int number2, int sum) {
    printf("%d + %d = %d\n", number1, number2, sum);
}

int main() {
    int number1, number2, sum;
    getInput(&number1, &number2);
    sum = calculateSum(number1, number2);
    displayResult(number1, number2, sum);
    return 0;
}
