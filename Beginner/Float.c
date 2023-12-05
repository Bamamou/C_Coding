/* 
|  This is the third course in C 
|  This is how to basically use float in C and how to do operation on them using C
|   How to print floating numbres using printf and how to input them using scanf 
|
*/
#include<stdio.h>

int main(){

    printf("==============================================================================");
    double num1 = 14.5;
    double num2 = 25.5;
    printf("This is an addition of doubles in C \t %f \n", num1 + num2);
    printf("This is a substraction of doubles in C \t %f \n", num1 - num2);
    printf("This is a division of doubles in C \t %f \n", num1 / num2);
    printf("This is a multiplication of doubles in C \t %f \n", num1 * num2);
    printf("===============================================================================\n");
   
    // Now let's use the scanf function to take input from the user to do the same operations
    float number1, number2;

    printf("Enter the first number: \t");
    scanf("%f", &number1);
    printf("Enter the second number: \t");
    scanf("%f", &number2);
    printf("This is an addition of doubles in C \t %f \n", number1 + number2);
    printf("This is a substraction of doubles in C \t %f \n", number1 - number2);
    printf("This is a division of doubles in C \t %f \n", number1 / number2);
    printf("This is a multiplication of doubles in C \t %f \n", number1 * number2);
    printf("===============================================================================\n");
     return 0;
}