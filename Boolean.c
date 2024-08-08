#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1, num2;
    bool result;
    //int even1,even2;
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    //even1=num1%=2;
    //even2=num2%=2;
    int evenmodulus1,evenmodulus2;
    int evenNumber(number1,number2){
        evenmodulus1=number1%=2;
        evenmodulus2=number2%=2;
    }
    evenNumber(num1,num2);
    // AND operator
    result = (evenmodulus1==0)&& (evenmodulus2==0);
    printf("Both numbers are even: %s\n", result ? "true" : "false");

    // OR operator
    result = (evenmodulus1==0)||(evenmodulus2==0);
    printf("At least one number is even: %s\n", result ? "true" : "false");

    // NOT operator
    result = !(evenmodulus1==0);
    printf("First number is not even: %s\n", result ? "true" : "false");

    // XOR operator
    result = (evenmodulus1=0) != (evenmodulus2==0);
    printf("Exactly one number is even: %s\n", result ? "true" : "false");

    return 0;
}
