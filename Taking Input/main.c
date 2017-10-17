//
//  main.c
//  Taking Input
//
//  Created by Kevin T on 2017-10-08.
//  Copyright © 2017 Kevin T. All rights reserved.
//

#include <stdio.h>

//main function of the program returning integer
int main(int argc, const char * argv[]) {
    // insert code here...
    //integer value for age
    int age;
    
    //print a question to user
    printf("How old are you?\n");
    
    //take input from the user as an integer
    scanf("%d", &age);
    
    //print the value for age entered by user
    printf("The value of age: %d\n", age);

//    int mystery_number = 7;
    
    //integer value for the numbered choice entered by user
    int number_chosen;
    
    //print a message asking the user to make a choice
    printf("Win a prize everytime!\n");
    printf("\n");
    printf("Pick a number between: 1 - 5\n");
    
    //take input from the user as an integer and print congrats message
    scanf("%d", &number_chosen); // 5
    printf("Congratulations! You won a...\n");

   //determine what message to print based on the user's choice
   switch(number_chosen)
    {
        case 1: printf("Trip to Barbados!\n"); break;
        case 2: printf("A bicycle!\n"); break;
        case 3: printf("A meal at Timmies!\n"); break;
        case 4: printf("Season pass to Wonderland!\n"); break;
        case 5: printf("Five nights at DisneyLand!\n"); break;
    }
    
    //character array of 20 elements
    char str[20];
    
    //ask user for a name input
    printf("Enter name: ");
    
    //take input from user as a string and store in array
    scanf("%s", str);
    
    //print the string array entered by user
    printf("Entered Name: %s\n", str);
    
    //integer for length of an array
    int len;
    
    //get the number of characters in string array
    len = strlen(str);
    
    //print the value of the string array entered by user and number of characters in the string array
    printf("Number of characters of |%s| is %d\n", str, len);
    
    //return value of 0 for main function
    return 0;
}
