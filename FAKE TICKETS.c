#include <stdio.h>
int main ()

{
   int n,i,m,j,l,fake;
   int array [190],array_1[10000];

   while (scanf ("%d %d",&n,&m)&& n!=0 && m!=0)

        {

        int sum=0;

        for(i=0;i<=n;i++) array_1[i] =0;

        while(m--)
        {

           scanf ("%d",&fake);

           if(array_1[fake]==1)sum++;

           array_1[fake]++;
        }

       printf("%d",sum);
}
	return 0;
}
