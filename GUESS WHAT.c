#include<stdio.h>
int main()
{
    int n,a,b,c,i,j,tmp;
    int num[10]={0};
    scanf("%d",&n);
    while(n--)
    {
      scanf("%d %d",&a,&b);
      c=0;
      tmp=0;

      for(i=0;i<a;i++)
        {
            scanf("%d",&tmp);

            if(b>tmp)
          {
            num[i] = b-tmp;
          }
            else
            {
              num[i] = tmp-b;
            }
        }

            tmp= num[0];

            for(j=0;j<a;j++)
        {
            if(num[j]==0)
            {
             c=j;
             break;
            }
            else if(tmp>num[j])
                {
                    tmp=num[j];
                    c=j;
                }
        }
            printf("%d\n",c+1);
    }
    return 0;
}


