#include <stdio.h>

// Function to add two integers (pass by value)
int add(int a, int b) {
    return a + b;
}

// Function to square an integer (pass by value)
int square(int num) {
    return num * num;
}

int main() {
    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    int sum = add(num1, num2);

    int squareNum1 = square(num1);
    int squareNum2 = square(num2);


    printf("\nSum of %d and %d: %d\n", num1, num2, sum);
    printf("Square of %d: %d\n", num1, squareNum1);
    printf("Square of %d: %d\n", num2, squareNum2);

    return 0;
}
