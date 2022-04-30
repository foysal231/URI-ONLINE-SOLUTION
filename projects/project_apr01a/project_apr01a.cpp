#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <math.h>



int DtoB()

{

    int b,a[50],i=0;

    printf("Enter your decimal value:");

    scanf("%d",&b);

    while(b/2!=0)//b=2 b=1

    {

        a[i]=b%2;// a[0]=1   5%2=1  a[1]=2%2=0

        b=b/2;// b=5 b=5/2 b=2   b=2/2 b=1

        i++;//i=1 i=2

    }

    printf("1");

    for(int j=i-1;j>=0;j--)

    {

        printf("%d",a[j]);//a[1]=0 a[0]=1

    }

    printf("\n");

}

int DtoO()

{

    int b,a[50],i=0;

    printf("Enter your decimal value:");

    scanf("%d",&b);

    while(b/8!=0)//b=2 b=1

    {

        a[i]=b%8;// a[0]=1   5%2=1  a[1]=2%2=0

        b=b/8;// b=5 b=5/2 b=2   b=2/2 b=1

        i++;//i=1 i=2

    }

    printf("%d",b);

    for(int j=i-1;j>=0;j--)

    {

        printf("%d",a[j]);//a[1]=0 a[0]=1

    }

    printf("\n");



}

int DtoH()
{
    int b,a[50],i=0;
    printf("enter the number");
    scanf("%d",&b);
    printf("%X",b);

}

int BtoD()
{
    int num,binary,decimal=0,base=1,rem;

    printf("Enter a binary number:");

    scanf("%d",&num); /*maximum 10 digit*/

    binary=num;

    while(num>0)
    {
        rem=num %10; //111%10=1  11%10=1 1%10=1

        decimal=decimal+rem*base;//0+1*1=1 1+1*2=3 3+1*4=7

        num=num/10;//111/10=11 11/10=1 1/10=0

        base=base*2;//1*2=2 2*2=4
    }

    printf("The decimal number is :%d\n",decimal);
}



 int BtoO()
{
    int binary,octal=0,base=1,rem;

    printf("Enter a binary number:");

    scanf("%d",&binary); /*maximum 10 digit*/

    while(binary!=0)
    {
        rem= binary %10;//100%10=0  10%10=0 1%10=1

        octal=octal+rem*base;//0+0*1=0 0+0*2=0 0+1*4=4

        base=base*2;//1*2=2 2*2=4 4*2=8

        binary=binary/10; //100/10=10 10/10=1 1/10=0
    }

    printf("The octal number is :%d\n",octal);
}

 int BtoH()
{
    int binary,hexadecimal=0,base=1,rem;


    printf("Enter a binary number:");

    scanf("%d",&binary); /*maximum 15 digit*/

    while(binary!=0)
    {
        rem= binary %10;//101%10=1  10%10=0 1%10=1

        hexadecimal=hexadecimal+rem*base; //0+1*1=1 1+0*2=1 1+1*4=5

        base=base*2;//1*2=2 2*2=4 4*2=8

        binary=binary/10; //101/10=10 10/10=1 1/10=0
    }

    printf("The hexadecimal number is :%X\n",hexadecimal);


}

void OtoD()
{
    int octal,decimal=0,base=1,rem;
    printf("Enter the octal number:");
    scanf("%d",&octal);

    while(octal!=0)
    {
        rem=octal%10;// 167%10=7 16%10=6 1%10=1
        decimal=decimal+rem*base;//0+7*1=7 7+6*8=55 55+1*64=119

        octal=octal/10;//167/10=16 16/10=1 1/10=0
        base=base*8;//1*8=8 8*8=64 64*8=512

    }
    printf("The decimal number is: %d\n",decimal);
}
void OtoB()
{
    int octal, decimal=0,binary=0,base=1,rem,i;
    printf("Enter the octal number:");
    scanf("%d",&octal);

 while(octal!=0)

    {
        rem=octal%10;// 167%10=7 16%10=6 1%10=1
        decimal=decimal+rem*base;//0+7*1=7 7+6*8=55 55+1*64=119

        octal=octal/10;//167/10=16 16/10=1 1/10=0
        base=base*8;//1*8=8 8*8=64 64*8=512

    }
    i=1;
   while(decimal!=0)
    {
        binary+=(decimal%2)*i;
        decimal/=2;
        i*=10;


   }

   printf("The Binary number is : %d\n", binary);

   }


void OtoH()
{
    int octal,hexadecimal=0,base=1,rem;
    printf("Enter the octal number:");
    scanf("%d",&octal);

    while(octal!=0)
    {
        rem=octal%10;
        hexadecimal=hexadecimal+rem*base;

        octal=octal/10;
        base=base*8;
    }
    printf("The Hexadecimal number is: %X\n",hexadecimal);
}
void HtoD()
{
    int hexadecimal,decimal=0,base=1,rem;
    printf("Enter the Hexadecimal number:");
    scanf("%d",&hexadecimal);

    while(hexadecimal!=0)
    {
        rem=hexadecimal%10;// 167%10=7 16%10=6 1%10=1
        decimal=decimal+rem*base;//0+7*1=7 7+6*8=55 55+1*64=119

        hexadecimal=hexadecimal/10;//167/10=16 16/10=1 1/10=0
        base=base*16;//1*8=8 8*8=64 64*8=512

    }
    printf("The Decimal number is: %d\n",decimal);
}





int main()

{

    int n;

    printf("1. Decimal to Binary\n");

    printf("2. Decimal to Octal\n");

    printf("3. Decimal to Hexadecimal\n");

    printf("4. Binary to Decimal\n");

    printf("5. Binary to Octal\n");

    printf("6. Binary to Hexadecimal\n");

    printf("7. Octal to Decimal\n");

    printf("8. Octal to Binary\n");

    printf("9. Octal to Hexadecimal\n");

    printf("10. Hexadecimal to Decimal\n");

    printf("11. Hexadecimal to Binary\n");

    printf("12. Hexadecimal to Octal\n");



    printf("\n||Enter the number||\n");

    while(1)

    {

        scanf("%d",&n);

        if(n==0) break;



        if(n==1) DtoB();

        else if(n==2) DtoO();

        else if(n==3) DtoH();

        else if(n==4) BtoD();

        else if(n==5) BtoO();

        else if(n==6) BtoH();

        else if(n==7) OtoD();

        else if(n==8) OtoB();

        else if(n==9) OtoH();

        else if(n==10)HtoD();



    }



}