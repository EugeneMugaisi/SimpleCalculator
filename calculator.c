#include <stdio.h>

int main() {
    double num1, num2, sum, difference;
    printf("\n\t Welcome to Eugene's simple Calculator\n");
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;
    difference = num1 - num2;

    printf("The sum of the numbers is: %.2lf\n", sum);
    printf("The difference of the numbers is: %.2lf\n", difference);
    // printf("The sum and difference of the numbers is: %.2lf\n", sum);

   printf("\n\nThank you for using my calculator!");
    return 0;
}