#include <stdio.h>

int main()
{
    long long A,B;

    while(scanf("%lld", &A) != EOF)
    {
        scanf("%lld", &B);
        if(A > B)
            printf("%lld\n", A-B);
        else
            printf("%lld\n", B-A);
    }

    return 0;
}
