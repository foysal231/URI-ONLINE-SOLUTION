#include<stdio.h>
int main()
{
    double A,B;

    char word [250];

    scanf("%s",&word);

    scanf("%lf %lf",&A,&B);

    printf("TOTAL = R$% .2f\n", A + ((B/100)*15));

    return 0;

}

