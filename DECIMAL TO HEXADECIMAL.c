#include<stdio.h>
int main()

{
   long long int hexadecimal=0,decimal,base=1,rem;
    scanf("%lld",& decimal );
    while (decimal!=0)
    {
        rem=decimal%10;
        hexadecimal=hexadecimal+rem*base;
        decimal=decimal/10;
        base=base*10;
    }
    printf("%llX\n",hexadecimal);
}
