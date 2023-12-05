/* 
| This is the first course in C and it is about variables 
| This course is about to create variables in C
| How to basically print variables using printf in C
*/
#include <stdio.h>
#include <string.h>

int main(){
    int interger = 2;
    double Double = 4.501258;
    float FLoating_number = 5.25;
    const int Constant = 11;
    char Character = 'A';
    char String[] = "Hello this is the first course in C !";

    printf("************************************************************************* \t");

    printf("This is an interger:\t %i \n", interger);            // %i is the specifier for (signed) intergers, \t is a tab and add a space after the colon :
    printf("This is a double: %f \n",Double);               // %f is the specifier for double and floating point numbers, the \n is the new line simple in C
    printf("This is a floating point number: %f \n", FLoating_number);     // %f is the specifier for floating point numbers.
    printf("This is constant interger: %i \n",Constant);             // %i is the specifier for interger
    printf("This is a charater: %c \n", Character);           // %c is the specifier for character  variables
    printf("This is a string: %s \n", String);

    printf("************************************************************************* \t");
    return 0;
}
