#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long a,b,i;
    scanf("%ld",&a);
    long arr[a],sum=0;
    for(i=0;i<a;i++)
    scanf("%ld",&arr[i]);
    for(i=0;i<a;i++)
    {
        sum+=arr[i];
    }
printf("%ld\n",sum);
        return 0;
}
