#include <stdio.h>
int main ()
{
    float a;
    int i, num=0;
    for (i=1;i<=6;i++)
    {
        scanf("%f",&a);
        if(a>0)
        {
            num=num+1;
        }
    }
    printf ("%d valores positivos\n",num);
}
