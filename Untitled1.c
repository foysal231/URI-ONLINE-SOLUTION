#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, a,i;
        scanf("%d",&a);
        int arr[a],sum=0;
        for(i=0;i<a;i++)
        scanf("%d",&
               arr[i]);
        for(i =0;i<a;i++)
        {

            sum+=arr[i];

    }
    printf("%d\n",sum);
    return 0 ;
}
