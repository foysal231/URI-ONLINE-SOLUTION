#include <stdio.h>
int main ()
{
    int x,y ;
    while (1)
    {
        scanf ("%d",&x);
        if (x==0)
            break;
        else
        {
            for (y=1;y<x;y++)
                printf ("%d ",y);
        }
        printf ("%d\n",x);
    }
    return 0;
}
