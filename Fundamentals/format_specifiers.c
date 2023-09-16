#include<stdio.h>
#include <stdbool.h>

//* Format Specifiers

int main() {
    
    float a = 13.5;
    float b = 2.5;
    float result1;
    int result2;
    const float PI = 3.14;

    result1 = a / b;
    result2 = a / b;

    //****************************************************************************************

    printf("The result is %f\n", result1); // 5.400000
    printf("The result is %.2f\n", result1); // 5.40
    printf("The result is %d\n", result2); // 5

    printf("With spaces:\n");

    printf("The result is %8f\n", result1); // 5.400000
    printf("The result is %8.2f\n", result1); // 5.40
    printf("The result is %8d\n", result2); // 5

    printf("Left alligned:\n");

    printf("The result is %-8f\n", result1); // 5.400000
    printf("The result is %-8.2f\n", result1); // 5.40
    printf("The result is %-8d\n", result2); // 5

    printf("Finally a constant is %f\n", PI); // 3.140000

    
}