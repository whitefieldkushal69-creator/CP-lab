C Program for Comma Operator

 #include <stdio.h>

int main() {
    int a, b, c;

    a = (b = 10, c = 20, b + c);

    printf("Value of b = %d\n", b);
    printf("Value of c = %d\n", c);
    printf("Value of a = %d\n", a);

    return 0;
}