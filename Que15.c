#include<stdio.h>
int main()
{
    int x;
    printf("enter a no. : ");
    scanf("%d",&x);
    if(x>0)
       {
         printf("no. is positive");
       }
        if(x<0)
       {
        
         printf("no. is nagative");
       }
        if(x==0)
      {
        printf("no. is zero");
      }  
      return 0;
}