#include<stdio.h>
int main()
{
    int a,b;

    double c,total;

    scanf("%d %d %lf",&a, &b, &c);

    total=b*c;

    scanf("%d %d %lf",&a ,&b, &c);

    total+=b*c;

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
