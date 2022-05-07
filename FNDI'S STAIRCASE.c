#include <stdio.h>
#include <math.h>
int main()
{
	int N ,H, C, L;;
	double l;
    while(scanf("%d",&N) != EOF)
    {

		scanf("%d %d %d",&H,&C,&L);

        l= N *sqrt(H*H+C*C);

		printf ("%.4lf\n",(L*l)/(10000));
	}

	return 0;
}
