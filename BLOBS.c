#include <stdio.h>
int main()
{
    int n,i,x;
    float y ;

    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
            scanf("%f", &y);
            x = 0;
            while(y>1)
            {
                y/= 2;
                x++;
            }
            printf("%d dias\n",x);
    }

    return 0;
}
