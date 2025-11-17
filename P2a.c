C program to display different data types


#include <stdio.h>

int main() {
    int a = 10;              
    float b = 3.14;          
    double c = 123.456789;
    char d = 'A';            
    char name[20] = "Murali"; 

    printf("Integer value: %d\n", a);
    printf("Float value: %.2f\n", b);
    printf("Double value: %.6lf\n", c);
    printf("Character value: %c\n", d);
    printf("String value: %s\n", name);

    return 0;

}