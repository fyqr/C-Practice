#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    float data[5];
    int count;
    char filename[20];
    puts("Enter 5 floating_point numerical values.");
    for(count=0;count<5;count++)
    {
        scanf("%f",&data[count]);
    }
    getchar();

    puts("Enter a name for the file.");
    gets(filename);

    if((fp=fopen(filename,"w"))==NULL)//why there are three brackets?
    {
        fprintf(stderr,"Error opening file %s.",filename);
        exit(1);
    }

    for(count=0;count<5;count++)
    {
        fprintf(fp,"\ndata[%d]=%f",count,data[count]);
        fprintf(stdout,"\ndata[%d]=%f",count,data[count]);
    }
    fclose(fp);
    printf("\n");
    return 0;

}
