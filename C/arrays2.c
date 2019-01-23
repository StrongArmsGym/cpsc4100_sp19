#include <stdio.h>

int* new_array()
{
    /* don't do this !  why??? */
    int localarray[10];
    localarray[0]=100;
    return localarray;
}

int main(int argc, char *argv[])
{
    int* value=new_array();

    printf("%d\n", value[0]);
    return 0;
}
