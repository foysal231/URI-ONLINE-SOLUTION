#include<stdio.h>
int main ()
{
    int n,i,a,temp=0;
    for(i=0;i<5;i++)
{
    scanf("%d",&a);
    if (a<0)
    {
        a=-a;
    }
    if(a % 2 == 0)
{
   temp++;
}
    }
    printf("%d valores pares\n",temp);
    return 0;
}
