#include <stdio.h>
int main ()
{
 float x , s = 0, b=1,i;
    for (i=1; i<=39; i+=2)
    {
        b=b*2;
        x=i/b;
        s=s+x;
        b=b*2;
    }
    printf ("%.2f\n",s);
    return 0;
}

