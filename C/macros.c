/* Wed Jan 30 2019 */

#include <stdio.h>  //Including standard IO package for C program

/* Defined macros listed below and implemented in main function */

#define TIMESTEN(x) (x)*10 // TIMESTEN macro defined as var 'x' multiplied by value 10, hence macro name
#define SQUARE(x) (x)*(x) // SQUARE macro defined as var 'x' squared

#define SWAP(v1, v2) { int temp=v1; v1=v2; v2=temp; } // SWAP macro with "explicit" parameters defined to swap two vars 

/* Main function tests TIMESTEN macro twice, SQUARE once, and SWAP once */

int main(int argc, char *argv[])
{
    printf("%d\n", TIMESTEN(45)); // prints TIMESTEN macro results with value 45 for var x; output should be 450
    printf("%d\n", TIMESTEN(10+20)); // prints TIMESTEN macro results with sum 10+20 for var x; output should be 300
    printf("%d\n", SQUARE(10+20)); // prints square of 10+20 sum, which should output to 900
    
    /* %d tells program to expect an int value, \n tells the program to start a new line at the end of the statement */
    
    int x=10;
    int y=20;
    printf("x: %d - y: %d\n", x, y); // prints values for vars x & y with statement expecting int as inputs

    SWAP(x,y); // SWAP macro implemented to swap the values for x & y; x is now 20 and y is now 10
        
    printf("x: %d - y: %d\n", x, y); //print swapped values

    printf("-----\n"); // prints separation of dashes and returns one line
    int z=100;
    int temp=200; // THIS is about to get confusing, but it will work as told no errors
    printf("%d - %d\n", z, temp); // outputs "100 - 200" with a new line
    SWAP(z,temp); // z is going to be 100 and so is temp after swap
    printf("%d - %d\n", z, temp); // oh noooooooooo

    return 0;
}
