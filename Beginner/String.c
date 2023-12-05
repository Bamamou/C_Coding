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
    // make all the letter in the first name upper case letters
    printf("\nThe Upper case letters are: %s\n", strupr(First_name));
    // make all the letter lower case in my first name
    printf("The lower case letters are: %s\n", strlwr(First_name));
    printf("When you reverse my name it gives: %s\n", strrev(First_name));
    // Let's use the same variable and print it using the string identifier
    printf("My first name is: %s\n", strupr(strrev(First_name)));
    printf("********************************************************************\n");
    // We can access the position of the first apperance of a character in a string  using the strchr fucntion
    /* 
    strchr(s1, ch);  Returns a pointer to the first occurrence of character ch in string s1.
    */
    printf("The return pointer is:  %d\n", strchr(First_name, 'c')); // this returns the pointer that hold the character and can be dereference as bellow
    printf("This is the character held by the pointer after derefencing it: %c\n", *strchr(First_name, 'C'));
    
    printf("********************************************************************\n");
    // We can concatinate two strings using the strcat function 
    char Last_name[] = " BAMAMOU";
  
    printf("Afer concatinating both string: %s\n", strcat(First_name, Last_name)); // Concatination is like additio of string in C
   // printf("the number of character in %s is: %d \n", strcat(First_name, Last_name), strlen("NicolasBamamou"));
    
    printf("********************************************************************\n");
    // we can use the c get() to get input function from user just as in C and we use the puts function to display user input
    char Get_input[100];
    printf("Enter a string: ");
    gets(Get_input);
    printf("You entered: ");
    puts(Get_input);
    printf("********************************************************************\n");
    //Now let's pass some string as user input
    char *Point_char ;
    printf("Enter a new string: ");
    gets(Point_char);                 // no need to dereference even when printing
    printf("This is what you entered: %s \n", Point_char);
    printf("********************************************************************\n");
    // Now let's take some string inputs from the users user scanf
    char Input[100];                   // initalize the variable 
    printf("Enter another string: ");       // a promt for the user input or enter the string
    scanf("[^\n]%s", Input);         //  Keep scaniing untill you you see the null charater in inside the arry of character from the user
    printf("You entered: %s\n", Input);
    
    printf("********************************************************************\n");
    // Now let's use pointers with some string and see how you can use char without needing to define their size.
    char *String_pointer = "This is first string pointer";  // note you don't need to specify the length or size of the string in this case
    printf("%s \n", String_pointer);                          // note you also don't need to dereference as it should be in CPP 



    return 0;
}