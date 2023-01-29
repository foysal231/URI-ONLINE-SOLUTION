#include<stdio.h>
int main ()
{
    double x,y, a=0,b=0;
    while(1)
    {
        if (b==2)
            break;
        scanf ("%lf",&x);
        if (x>=0 && x<=10)
        {
            b++;
            a+=x;
        }
        else
        printf("nota invalida\n");
    }
    printf("media = %.2lf\n",a/2.00);
    return 0;
}
