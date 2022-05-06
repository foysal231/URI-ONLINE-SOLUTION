#include<stdio.h>
int main()
{
    int l,c,r1,r2,x,y,z;
    while (scanf("%d%d%d%d",&l,&c,&r1,&r2))
    {
        z=(r1+r2)*2;
        x=r1*2;
        y=r2*2;
        if(l==0 && c==0 && r1==0 && r2==0)
        {
            break;
        }
        else if(l>c)
        {
            if(l>=z && c>=(x||y))
            {
                printf("S\n");
            }
            else printf("N\n");
        }
        else if(c>l)
        {
            if(c>=z && l>=(x||y))
            {
                printf("S\n");
            }
            else printf("N\n");
        }
        else if(c==l)
        {
            if(l>=z && c>=(x||y))
            {
                printf("S\n");
            }
            else if(c>=z && l>=(x||y))
            {
                printf("S\n");
            }
            else printf("N\n");
        }
    }

    return 0;

}
