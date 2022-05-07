#include <stdio.h>
int main()
{
    long long  int a,b,c;
    scanf("%lld %lld",&a,&b);
    c=(a+b)*(b-a+1)/2;
    printf("%lld\n",c);
    return 0;
}

