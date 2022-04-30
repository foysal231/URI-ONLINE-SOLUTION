#include<stdio.h>
int main()
{
    int N[1000],n,i,j=0;
    scanf("%d",&n);
    for(i=0;i<1000;i++)
    {
        if(j==n)
        j=0;
        printf("N[%d] = %d\n",i,j);
        j++;
    }

    return 0;

}
