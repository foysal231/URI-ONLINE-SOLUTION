#include <stdio.h>
#include <string.h>

int main()
{
    int a,l;
    char x[10100];
    scanf("%d", &a);
    while(a--)
    {
        scanf("%s",x);
        l = strlen (x);
        printf("%.2lf\n", l*.01);
    }
    return 0;
}
