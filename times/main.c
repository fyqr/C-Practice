#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    time_t start,finish,now;
    struct tm *ptr;
    char *c,buf1[80];
    double duration;

    start=time(0);
    time(&now);

    ptr=localtime(&now);

    c=asctime(ptr);
    puts(c);
    getc(stdin);

    strftime(buf1,80,"This is week %U of the year %Y",ptr);
    puts(buf1);
    getc(stdin);

    strftime(buf1,80,"Today is %A,%x",ptr);
    puts(buf1);
    getc(stdin);

    strftime(buf1,80,"It is %M minutes past hour %I.",ptr);
    puts(buf1);
    getc(stdin);

    finish=time(0);
    duration=difftime(finish,start);
    printf("\nProgram execution time using time()=%f seconds.",duration);
    printf("\nProgram execution time using clock()=%f seconds.",clock());

    return 0;

}
