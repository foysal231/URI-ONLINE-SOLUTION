#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a[12];
        int x,v ;
        scanf("%d",&x);
        for(int j=0;j<x;j++)
        {
            scanf("%d",&a[j]);
        }
        v=a[x/2];
      printf("Case %d: ",i);
      printf("%d\n",v);
    }
    return 0;
}
