#include<stdio.h>
int main()
{
  int x;
  printf("enter the number");
  scanf("%d",&x);
  if(x % 3 == 0)
  {
    printf("no is divisible by 3");
  }
  if( x % 2 == 0)
  {
    printf("no is divisible by 2");
  }
  return 0;

}
