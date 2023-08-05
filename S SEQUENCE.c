#include <stdio.h>
int main ()
{
 float x , s = 0, b=1,i;
    for (i=1; i<=100; i++)
    {
        x=1/i;
        s=s+x;

    }
    printf ("%.2f\n",s);
    return 0;
}
