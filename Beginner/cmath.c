/* 
|  This is the third course in C 
|  This is how to basically use float in C and how to do operation on them using C
|   How to print floating numbres using printf and how to input them using scanf 
|
*/
#include<stdio.h>
#include <math.h>
int main(){
    double number;
    printf("Enter a number: ");
    scanf("%lf",  &number);
    printf("The squart root of %lf is:  %lf", number, sqrt(number));
    return 0;
}