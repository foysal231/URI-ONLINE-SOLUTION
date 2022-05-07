#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long long int j ,k,sum,r;
        scanf("%lld %lld",&j,&k);
        sum=0;
        while(j>0)
            {
                if(j%k==0)
                {
                    j/=k;
                    ++sum;
                }
                else{
                    r=j%k;
                    sum+=r;
                    j-=r;
                }
            }
        printf("%lld\n",sum);
    }
    return 0;
}
