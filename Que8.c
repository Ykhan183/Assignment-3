#include<stdio.h>
int main()
{
    int x;
    printf("enter the year");
    scanf("%d",&x);
    if(x % 400==0 || x %4==0 && x % 100!=0)
    {
        printf("year is leap year");

    }
    else
    {
        printf("year is not leap year");
    }
}