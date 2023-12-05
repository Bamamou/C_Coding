/* 
|  This is the third course in C 
|  This is how to basically use float in C and how to do operation on them using C
|   How to print floating numbres using printf and how to input them using scanf 
|
*/
#include<stdio.h>
#include <string.h>

int main(){
    // Let's first use  char and print is using an iteration or for loop with char
    char First_name[] = "Nicolas";
    for (int i = 0; i < strlen(First_name); i++)
    {
        printf("%c", First_name[i]); 
    }
    printf("\n********************************************************************\n");
    // Let's use the same variable and print it using the string identifier
    printf("My first name is: %s\n", First_name);
    printf("********************************************************************\n");
    // We can access the position of the first apperance of a character in a string  using the strchr fucntion
    /* 
    strchr(s1, ch);  Returns a pointer to the first occurrence of character ch in string s1.
    */

    printf("The return pointer is:  %d\n", strchr(First_name, 'c')); // this returns the pointer that hold the character and can be dereference as bellow
    printf("This is the character held by the pointer after derefencing it: %c\n", *strchr(First_name, 'c'));
    printf("********************************************************************\n");
    // We can concatinate two strings using the strcat function 
    char Last_name[] = " BAMAMOU";
  
    printf("Afer concatinating both string: %s\n", strcat(First_name, Last_name)); // Concatination is like additio of string in C
    
    printf("********************************************************************\n");
    // Now let's take some string inputs from the users
    char Input[100];                   // initalize the variable 
    printf("Enter a string: ");       // a promt for the user input or enter the string
    scanf("%[^\n]s", Input);         //  Keep scaniing untill you you see the null charater in inside the arry of character from the user
    printf("You entered: %s", Input);
    return 0;
}