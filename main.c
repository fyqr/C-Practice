//Demonstrates printer output
//stdprn is not ANSI standard.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float f = 2.0134;
    fprintf(stdprn,"\nThis message is printed.\r\n");
    fprintf(stdprn,"And now some numbers:\r\n");
    fprintf(stdprn,"The square of %f is %f.",f,f*f);
    //Send a form feed.
    fprintf(stdprn,"\f");

    printf("Hello world!\n");
    return 0;
}
