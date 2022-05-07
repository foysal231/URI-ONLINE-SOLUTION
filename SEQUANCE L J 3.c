#include <stdio.h>
int main ()
{
    int I ,J,X=7,Y;
    for (I=1;I<=9 ; I+=2)
    {
       for (Y=1,J=X;Y<=3;J--,Y++)
       printf ("I=%d J=%d\n",I,J);
       X+=2;
    }
    return 0;
}


