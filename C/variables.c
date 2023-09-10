#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // program to declare and initialize variables of different data types
    // for integer vairable
    int integer_variable=42;
    
    //for floating-point number
    float float_variable=3.14;
    
    // for character variable
    char character_variable = 'A';
    
    // for Boolean variable (using integers)
    int boolean_variable = 1; // 1 represents true, 0 represents false
    
    // String variable (array of characters)
    char string_variable[] = "Hello, world!";
    
    //printing the values of different data types and variables
    printf("intVar: %d (int)\n",integer_variable);
    printf("floatVar: %.2f (float)\n", float_variable);
    printf("charVar: %c (char)\n", character_variable);
    printf("boolVar: %d (bool)\n", boolean_variable);
    printf("strVar: %s (str)\n", string_variable);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}