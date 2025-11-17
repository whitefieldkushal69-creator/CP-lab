
C Program to Compute Student Grade based on total
 marks and display result (Pass/Fail)



 #include <stdio.h>

int main() {
    int marks;

    printf("Enter total marks (out of 100): ");
    scanf("%d", &marks);

    if(marks < 0 || marks > 100) {
        printf("Invalid Marks! Please enter between 0 and 100.\n");
    }
    else {
         
        if(marks >= 35)
            printf("Result: PASS\n");
        else
            printf("Result: FAIL\n");

        if(marks >= 90)
            printf("Grade: A\n");
        else if(marks >= 75)
            printf("Grade: B\n");
        else if(marks >= 60)
            printf("Grade: C\n");
        else if(marks >= 50)
            printf("Grade: D\n");
        else if(marks >= 35)
            printf("Grade: E\n");
        else
            printf("Grade: F\n");
    }

    return 0;
}
