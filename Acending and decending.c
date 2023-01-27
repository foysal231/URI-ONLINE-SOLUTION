#include<stdio.h>
int main ()
{
    int x,y;
    while(1)
    {

    scanf("%d %d",&x ,&y);
    if (x<y)
    printf("Crescente");
    else if (x>y)
    printf("Decrescente");

    else if (x=y)
    break;

    }
    return 0;
}
