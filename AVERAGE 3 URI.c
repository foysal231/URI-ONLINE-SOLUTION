#include<stdio.h>
int main()
{
    double  N1,N2,N3,N4,avr,last;

    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);

    avr=(N1*2+ N2*3+ N3*4 + N4)/10;

    printf("Media: %.1f\n",avr);

    if (avr >= 7.0)
    {
       printf("Aluno aprovado.\n");
    }
    else if (avr >= 5.0)
    {
        printf("Aluno em exame.\n");

        scanf("%lf", &last);

        printf("Nota do exame: %.1f\n", last);

        if (last + avr/ 2.0 > 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
          printf("Media final: %.1f\n", (last + avr ) / 2.0);
    }
    else
    {
       printf("Aluno reprovado.\n");
    }

    return 0;
}
