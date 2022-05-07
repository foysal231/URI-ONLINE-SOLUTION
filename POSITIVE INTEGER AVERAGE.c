#include <stdio.h>
int main ()
{
    float a,avr=0,total =0;
    int i, num=0;
    for (i=1;i<=6;i++)
    {
        scanf("%f",&a);
        if(a>0)
        {
            num +=1;
            total+=a;
        }

    }
    avr=total/num;
    printf ("%d valores positivos\n",num);
    printf ("%\.1f\n",avr);
    return 0;
}

