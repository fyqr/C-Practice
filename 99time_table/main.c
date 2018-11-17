#include <stdio.h>
#include <stdlib.h>
int compute(int a,int b);
int main(void)
{
    int i,j;
    for(i=1;i<10;i++)//LOOP
    {
      for(j=1;j<i+1;j++)
      {
          printf("%d*%d=%d\t",i,j,compute(i,j));
      }
      printf("\n");
    }

    return 0;
}

int compute(int a,int b)
{
    int sum;
    sum=a*b;
    return sum;
}
