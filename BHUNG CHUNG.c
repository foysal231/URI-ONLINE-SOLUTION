#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n,sum,kaktaruya,a;
    char s [101];
    scanf ("%d",&n);
    while (n!=0)
    {
        scanf ("%d",&a);
        for(int i=1; i<=a; i++)
        {
            scanf ("%d",&sum);
            scanf ("%s",s);
            kaktaruya=0;

            for (int j = 0 ; j<sum;)
            {
                if (s[j]== '.')
                {
                    kaktaruya++;
                    j+=3;
                }
                else j++;
            }

            printf ("Case %d: %d\n",i,kaktaruya);
        }
        n--;
    }
    return 0;
}
