#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
    char* msg = "hello";
    char local[10];

    /* this is illegal:  why? */
    /*
      msg[0]='a';
      puts(msg);    
    */
    

    /*  strcpy(local, msg); */
    strncpy(local, msg, 10);
    puts(local);
    local[0] = 'a';
    puts(local);

    char* dup = strdup(msg);
    puts(dup);

    /* gotta free it when i'm done */
    free(dup);


    return 0;
}
