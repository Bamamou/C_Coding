/* 
|  This is the second course in C 
|  This is how to basically use intergers in C and how to do operation on them using C
|   How to print intergers using printf and how to input them using scanf 
|
*/
#include <stdio.h>

int main(){
    // basic arithmetic operation on integers using operands. 
    int First_number = 25;
    int Second_number = 5;
    printf("***************************************************************************** \n");
    printf("The sum of the first and second number is: %i \n", First_number + Second_number); // This is an addition operation
    printf("The difference of the first and second number is: %i \n", First_number - Second_number); // This is an substraction operation
    printf("The product of the first and second number is: %i \n", First_number * Second_number); // This is an multiplication operation in C
    printf("The quotion of the first and second number is: %i \n", First_number / Second_number); // This is a division operation in C
    printf("The modulo of the first and second number is: %i \n", First_number % Second_number); // This is a modulo operation in C
    printf("***************************************************************************** \n");
    
    
    // Now a second example where we are some differences 
    int First_number_Example2 = 25;
    int Second_number_Example2 = 4;
    // We can see that the division of 25 by 4 is 6 instead of 6.25 meaning that an integer cannot take the value of a double or a float.

    printf("The sum of the first and second number is: %i \n", First_number_Example2 + Second_number_Example2); // This is an addition operation
    printf("The difference of the first and second number is: %i \n", First_number_Example2 - Second_number_Example2); // This is an substraction operation
    printf("The product of the first and second number is: %i \n", First_number_Example2 * Second_number_Example2); // This is an multiplication operation in C
    printf("The quotion of the first and second number is: %i \n", First_number_Example2 / Second_number_Example2); // This is a division operation in C
    printf("The modulo of the first and second number is: %i \n", First_number_Example2 % Second_number_Example2); // This is a modulo operation in C
    printf("***************************************************************************** \n");

    // let's use now the scanf fucntion since we are now used to the printf function.
    int First_number_Example3;                // this variable initialization
    int Second_number_Example3;               // this variable initialization
    printf("Enter the first number: \t\n");
    scanf("%i", &First_number_Example3);
    printf("Enter the second number: \t\n");
    scanf("%i", &Second_number_Example3);
    // We can see that the division of 25 by 4 is 6 instead of 6.25 meaning that an integer cannot take the value of a double or a float.

    printf("The sum of the first and second number is: %i \n", First_number_Example3 + Second_number_Example3); // This is an addition operation
    printf("The difference of the first and second number is: %i \n", First_number_Example3 - Second_number_Example3); // This is an substraction operation
    printf("The product of the first and second number is: %i \n", First_number_Example3 * Second_number_Example3); // This is an multiplication operation in C
    printf("The quotion of the first and second number is: %i \n", First_number_Example3 / Second_number_Example3); // This is a division operation in C
    printf("The modulo of the first and second number is: %i \n", First_number_Example3 % Second_number_Example3); // This is a modulo operation in C
    printf("*****************************************************************************");





    return 0;
}