#include <stdio.h> .
int main ()
{
    long long int l ,c ;
    scanf ("%lld %lld",&l,&c);
    if (l%2==c%2)
    {
        printf ("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
