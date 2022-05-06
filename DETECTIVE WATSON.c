#include<stdio.h>

int main ()
{
    int n,pos,max,max1,i,j,k;
    while (scanf("%d",&n)&& n!=0)
    {
        int arr[n];
        max=max1=pos=0;
        for( i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(max<arr[i])
                max=arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(max1<arr[i]&& arr[i]!= max)
            {
                max1=arr[i];
                pos=i;
            }
        }
        printf("%d\n",pos+1);
    }
    return 0;
}
