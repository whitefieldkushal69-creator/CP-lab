
C program to perform all Arithmetic
Operations ( + , - , * , / )

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n--- Arithmetic Operations ---\n");

    printf("Addition (a + b)       : %d\n", a + b);
    printf("Subtraction (a - b)    : %d\n", a - b);
    printf("Multiplication (a * b) : %d\n", a * b);

    if(b != 0) {
        printf("Division (a / b)       : %d\n", a / b);
    } else {
        printf("Division (a / b)       : Not possible (Division by zero!)\n");
    }

    return 0;
}
