#include<stdio.h>
int main ()
{
    int arr[10];
    arr[0]=1;
    int n ,c=0,l,i;
    for(i=1;i<9;i++)
    {
        arr[i]=i*arr[i-1];
    }
    scanf("%d",&n);
    for(i=1;i<=9;i++){

        if(arr[i]>n)
        l=i-1;
        break;
    }
}
  for (i = l; i >= 0; i--)
  {
  c += (n/a[i]);
  n = n%arr[i];
  }
  printf("%d\n",c);
  return 0 ;
}
