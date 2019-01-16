#include <stdio.h>

#define SIZE 10

int array[SIZE];

int* valptr();
int main(int argc, char *argv[])
{
    int* vp = valptr();

    *vp = 100;
    *(vp + 4) = 200;

    for (int i=0; i<SIZE; i++)
    {
        printf("%d - %d\n", i, array[i]);
    }

    return 0;
}



int* valptr()
{
    return array;
}
