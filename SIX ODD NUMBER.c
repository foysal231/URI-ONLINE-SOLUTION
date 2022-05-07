#include <stdio.h>
int main()
{
    int n ,i, value=6;
    scanf("%d",&n);
    for(i=n;i<(n+(value*2));i+=2)
    {
    int odd;

    if (i%2==0)
    {
        odd=i+1;
        printf ("%d\n",odd);
    }
    else
    {
        odd = i;
        printf ("%d\n",odd);
    }
}
return 0;
}

