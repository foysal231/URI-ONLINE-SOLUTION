#include<stdio.h>

 int main()
{
	long long int i,k,x,y;
	long long int f=1,j=1;
	while(scanf("%lld %lld",&x,&y) != EOF)
        {

		for(i=1; i<=x; i++){
			f=f*i;
		}
		for(k=1; k<=y; k++){
			j=j*k;
		}
		long long int sum = f+j;
		printf("%lld\n",sum);
		f=j=1;

	}

}
