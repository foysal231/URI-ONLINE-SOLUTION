#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &j);
        if(j%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}
