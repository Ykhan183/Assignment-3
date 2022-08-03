#include<stdio.h>
int main()
{
    float cp,sp,loss,profit,per;
    printf("enter cp\nsp");
    scanf("%f\n%f",&cp,&sp);
        profit=sp-cp;
        loss=cp-sp;
        if(sp>cp)
    {   
        printf("profit is= %f",profit);
        printf("profit per is=%f %%",profit*100/cp);
    }
  else
    {   
        printf("loss is= %f",loss);
        printf("loss  per is=%f %%",loss*100/cp);
    }
    return 0;
}
