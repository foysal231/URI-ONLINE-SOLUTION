#include<stdio.h>
int main ()
{
  int i , n,rpm,count=0,temp=0,ans=0,c=1;
  scanf("%d",&n);
  while(n--)
  {
      scanf("%d",&rpm);
      count++;
     if (rpm<temp &&c==1)
     {
         ans=count;
         c=0;
     }
     temp=rpm;
  }
  printf("%d\n",ans);
  return 0;
}
