#include <stdio.h>

int value=0;


int* valptr();


int main(int argc, char *argv[])
{
    int* vp = valptr();

    //*vp = 100;

    *(int*)((void*)vp+1)=1;

    



    printf("value: %d\n", value);
    printf("*vp: %d\n", *vp);
    return 0;
}

int* valptr()
{
    return &value;
}
