#include<stdio.h>
#include <string.h>
int main()
{
	int i,n,k,j;
    while(scanf("%d",&n)!=EOF)
        {
    k=0;
	k = n/2;

    for(i=1;i<=n;i=i+2)
        {
            for(j=0;j<k;j++)
            printf(" ");
            for(j=0;j<i;j++)
            printf("*");
            k--;
           	printf("\n");
    	}

    		k = n/2;
    	    for(i=1;i<=3;i=i+2)
        {
            for(j=0;j<k;j++)
            printf(" ");
            for(j=0;j<i;j++)
            printf("*");
            k--;
            printf("\n");
    	}
    	printf("\n");
    }
	return 0;
}
