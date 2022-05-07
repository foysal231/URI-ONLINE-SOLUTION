#include<stdio.h>
int main()
{
    float n,a,b,c;
    a= b = c = 0;
    while(1)
    {
        scanf("%f",&n);
        if(n < 0.0 || n > 10.0)
            printf("nota invalida\n");
        else
        {
            a+= n;
            b++;
            if(b==2)
            {
                a/=2;
                printf("media = %.2lf\n",a);
                printf("novo calculo (1-sim 2-nao)\n");
                while(1)
                {
                    scanf("%f",&n);
                    if((int)n==1)
                    {
                        a = b = 0;
                        c=1;
                        break;
                    }
                    else if((int)n==2)
                        return 0;
                    else
                        printf("novo calculo (1-sim 2-nao)\n");
                }
            }
        }
    }
    return 0;
}
