#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i,j,n;
  double sum=0,temp;
  printf("Please input the number \' n \':");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
      temp=i+1;
      sum+=temp;
  }
  printf("Sum of the n=%f",sum);
}
