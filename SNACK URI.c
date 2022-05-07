#include<stdio.h>
int main()
{
    int x,b;

    float total = 0;

    scanf("%d %d",&x,&b);

    if(x==1)
    {
        total  = (float) (4.00*b);
    }
    else if(x==2)
    {
        total  = (float) (4.50*b);
    }
    else if(x==3)
    {
        total  = (float) (5.00*b);
    }
    else if(x==4)
    {
        total  = (float) (2.00*b);
    }
     else if(x==5)
    {
        total  = (float) (1.50*b);
    }

    printf("Total: R$ %.2f\n",total);

    return 0;
}

