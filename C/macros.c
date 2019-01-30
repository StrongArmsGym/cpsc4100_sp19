/* Wed Jan 30 2019 */

#include <stdio.h>

#define TIMESTEN(x) (x)*10
#define SQUARE(x) (x)*(x)

#define SWAP(v1, v2) { int temp=v1; v1=v2; v2=temp; }


int main(int argc, char *argv[])
{
    printf("%d\n", TIMESTEN(45));
    printf("%d\n", TIMESTEN(10+20));
    printf("%d\n", SQUARE(10+20));

    int x=10;
    int y=20;
    printf("x: %d - y: %d\n", x, y);

    SWAP(x,y);
        
    printf("x: %d - y: %d\n", x, y);

    printf("-----\n");
    int z=100;
    int temp=200;
    printf("%d - %d\n", z, temp);
    SWAP(z,temp);
    printf("%d - %d\n", z, temp);

    return 0;
}
