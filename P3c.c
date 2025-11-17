C Program for Increment/Decrement Operator

 #include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("\nOriginal value of a = %d\n", a);
 
    printf("After pre-increment (++a): %d\n", ++a);
 
    printf("After post-increment (a++): %d\n", a++);
    printf("Value after post-increment is executed: %d\n", a);
 
    printf("After pre-decrement (--a): %d\n", --a);

    printf("After post-decrement (a--): %d\n", a--);
    printf("Value after post-decrement is executed: %d\n", a);

    return 0;
}