#include<stdio.h>

int main()
{
    int n;

   while(scanf("%d",&n)&& n!=0)
   {
        int x,y,a=0,b=0;
        while(n--)
        {
         scanf("%d %d",&x,&y);
        if(x>y)
        {
           a++;
        }
          else if(x<y)
        {
           b++ ;
        }

        }
         printf("%d %d\n",a,b);
    }
    return 0;
}
