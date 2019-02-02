/* Mon Jan 28  2019  */

#include <stdio.h>

int main(int argc, char *argv[])
{
    char* msg = "hello0"; // char array of value hello0 initialized
    int c=0; // local var c of int type initialized to 0

    /* while loop goes through msg (char array) and outputs the char value of each index and the index value */
    while (msg[c]) // as long as we haven't reached the end of msg
    {
        printf("%c - %d\n", msg[c], msg[c]); //outputs the character at index c and index c
        c++; //increments c by 1
    }

    printf("%c - %d\n", 0, 0); //outputs the ASCII value for 0 and the int value 0

    while (*msg) //while there is a pointer on a value in msg
    {
        printf("%c\n", *msg); //prints the char that the pointer in msg is on currently on a new line
        msg++; //moves the pointer value up one
    }


    return 0;
}


