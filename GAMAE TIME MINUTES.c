#include <stdio.h>
int main()
{
    int a,b,c,d;

    int value ;

    scanf("%d %d %d %d",&a ,&b,&c,&d); // 7 8 9 10

    value=((c*60)+d)-((a*60)+b);

    if (value<=0) value += 24*60;

    printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", value/60,value%60);

    return 0;

}
