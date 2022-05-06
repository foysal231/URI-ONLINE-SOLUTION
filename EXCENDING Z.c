#include<stdio.h>
int main()
{
    int x,z,i,a=0,b=0;
        scanf("%d",&x);
        while(1)
        {
            scanf("%d",&z);
            if(z>x)
                break;
        }
        for(i=x; ; i++)
        {
            a+=i;
            b++;
            if(a>z)
            {
                break;
            }
        }
        printf("%d\n",b);
    return 0;
}
