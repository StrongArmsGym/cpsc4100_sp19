/* Mon Jan 28  2019  */

#include <stdio.h>

int main(int argc, char *argv[])
{
    char* msg = "hello0";
    int c=0;

    while (msg[c]) 
    {
        printf("%c - %d\n", msg[c], msg[c]);
        c++;
    }

    printf("%c - %d\n", 0, 0);

    while (*msg)
    {
        printf("%c\n", *msg);
        msg++;
    }


    return 0;
}


