#include <stdio.h>
#include <stdlib.h>


int* new_array()
{
    int* array = malloc(10 * sizeof(int));

    return array;
}

int main(int argc, char *argv[])
{
    int* value=new_array();

    for (int i=0; i<10; i++)
    {
        printf("%d - %d\n", i, value[i]);
    }
    
    free(value);

    return 0;
}
