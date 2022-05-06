#include<stdio.h>
int main ()
{
    int i ;
    scanf("%d",&i);
    while(i--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(y==0)
            printf("divisao impossivel\n");
        else
        {
            printf("%.1f\n",(float)(x)/(float)(y));
        }
    }
    return 0;
}
