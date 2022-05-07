#include<stdio.h>
int main()
{

    float n ;
    scanf ("%f",&n);
    if (n<=2000)
    {
        printf("Isento\n");
    }
    else if (n>=2000.01 && n<=3000.00)
    {
        printf("R$ %.2f\n",(n-2000.00)*0.08);
    }
    else if (n>=3000.01 && n<=4500.00)
    {
        printf("R$ %.2f\n",(n-3000.00)*0.18+1000*0.08);
    }
    else if (n>=4500.00)
    {
    printf("R$ %.2f\n", ((n- 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08));
    }
    return 0;
}
