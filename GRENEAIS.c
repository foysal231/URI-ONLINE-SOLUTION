#include<stdio.h>
int main ()
{
    int a,b,p,q,r,s;
    int c=0,d=0,e=0, x=0,y=0,z=0;
    while(1)
    {
        scanf("%d %d",&a,&b);
        if (a>b)x++;
        if (a<b) y++;
        if (a==b)z++;
        c+=a;
        d+=b;
        e++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&p);
        if (p==1)
            continue;
        if(p==2)
            break;

    }
    printf("%d grenais\n",e);
    printf("Inter:%d\n",x);
    printf("Gremio:%d\n",y);
    printf("Empates:%d\n",z);
    if(x>y)
        printf("Inter venceu mais\n");
    if(x<y)
        printf("Gremio venceu mais\n");
    if(x==y)
        printf("Nao houve vencedor\n");
    return 0;
}
