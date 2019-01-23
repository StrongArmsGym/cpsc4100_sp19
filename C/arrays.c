#include <stdio.h>
#define SIZE 5

void process(int* aptr, int size)
{
    /* aptr[size]=10; */

    /* store in element 1 of the array (being pointed at) */
    *(aptr+1)=10;

    /* don't do this */
    /* aptr = 10; */
    /* *aptr=10; */
}



int main(int argc, char *argv[])
{
    int values[SIZE];

    for (int i=0; i<SIZE; i++)
    {
        values[i]=i;
    }

    process(values, SIZE);

    for (int i=0; i<SIZE; i++)
    {
        printf("%d - %d\n", i, values[i]);
    }

    return 0;
}
