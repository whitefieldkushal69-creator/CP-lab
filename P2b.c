C program for Input and Display Various Data Types



#include <stdio.h>

int main() {
    int i;
    float f;
    double d;
    char c;
    char str[50];

    
    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a float value: ");
    scanf("%f", &f);

    printf("Enter a double value: ");
    scanf("%lf", &d);

    printf("Enter a character: ");
    scanf(" %c", &c); 

    printf("Enter a string (no spaces):");
    scanf("%s", str);

   
    printf("\n--- Displaying Entered Values ---\n");
    printf("Integer: %d\n", i);
    printf("Float: %.2f\n", f);
    printf("Double: %.4lf\n", d);
    printf("Character: %c\n", c);
    printf("String: %s\n", str);

    return 0;
}