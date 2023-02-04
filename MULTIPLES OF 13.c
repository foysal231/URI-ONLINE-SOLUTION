#include<stdio.h>
int main ()
{
    int x,y,z,i,sum=0;
    scanf("%d %d",&x,&y);
    if (x>y)
    {
        z=y;
        y=x;
        x=z;
    }
    for(i=x;i<=y;i++)
    {
        if(i%13!=0)
            sum+=i;
    }
    printf("%d",sum);

}
