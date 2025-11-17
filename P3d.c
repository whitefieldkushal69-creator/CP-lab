C Program for Relational Operator

 #include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n--- Relational Operations ---\n");

    printf("%d == %d : %d\n", a, b, a == b);  
    printf("%d != %d : %d\n", a, b, a != b);  
    printf("%d > %d  : %d\n", a, b, a > b);   
    printf("%d < %d  : %d\n", a, b, a < b);   
    printf("%d >= %d : %d\n", a, b, a >= b);  
    printf("%d <= %d : %d\n", a, b, a <= b);  

    return 0;
}