#include <stdio.h>
int main()
{
    int N[10], I, V;
    scanf("%d", &V);
    for(I=0; I<=9; I++)
    {
        N[I]=V;
        printf("N[%d] = %d\n",I,V);
        V*=2;
    }
    return 0;
}

