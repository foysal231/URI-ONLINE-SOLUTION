#include<stdio.h>
#include<string.h>

struct base{
    int Input;
    int output;
    int ans[30];

}p1;
struct hexa{
    char input[17];
    char output[65];
}h1;


void DtoB()
{
    FILE *fp;
    fp = fopen("CONVERSION.text","a");
    int n,a[30],i=0;
    printf("Enter your Decimal number:");
    scanf("%d",&p1.Input);
    while(p1.Input!=0)
    {
        p1.ans[i]=p1.Input%2;//p[0]=15%2=1,p[1]=7%2=1,p[2]=3%2=1,p[3]=1%2=0
        p1.Input=p1.Input/2;//15/2=7, 7/2=3, 3/2=1 , 1/2=0
        i++;//1//2//3//4
    }

    for(int j=i-1; j>=0; j--)// 0//1//1//1
    {
        printf("%d",p1.ans[j]);
        fprintf(fp,"%d",p1.ans[j]);
    }
    printf("\n");
    printf(fp,"\n");
    fclose(fp);
}


void DtoO()
{

    FILE *fp;
    fp = fopen("CONVERSION.text","a");
    int n,a[30],i=0;
    printf("Enter your Decimal number:");
    scanf("%d",&p1.Input);
    while(p1.Input!=0)
    {
        p1.ans[i]=p1.Input%8;
        p1.Input=p1.Input/8;
        i++;
    }
    printf("The Octal number is: ");
    for(int j=i-1; j>=0; j--)
    {
        printf("%d",p1.ans[j]);
        fprintf(fp,"%d",p1.ans[j]);
    }
    printf("\n");
    printf(fp,"\n");
    fclose(fp);
}
void DtoH()
{

    FILE *fp;
    fp = fopen("CONVERSION.text","a");
    int n,a[30],i=0;
    printf("Enter your Decimal number:");
    scanf("%d",&p1.Input);
    while(p1.Input!=0)
    {
        p1.ans[i]=p1.Input%16;
        p1.Input=p1.Input/16;
        i++;
    }
    printf("The Hexadecimal number is: ");
    for(int j=i-1; j>=0; j--)
    {
        printf("%X",p1.ans[j]);
        fprintf(fp,"%d",p1.ans[j]);
    }
    printf("\n");
    printf(fp,"\n");

     fclose(fp);
}
void BtoD()
{

    FILE *fp;
    fp = fopen("CONVERSION.text","a");
    int num, binary,decimal=0,base=1,rem;
    printf("Enter your Binary number:");
    scanf("%d",&p1.Input);
    while(p1.Input>0)
    {
        rem=p1.Input%10;//111%10=1 11%10=1 1%10=1
        decimal=decimal+rem*base;//0+1*1=1 1+1*2=3 3+1*4=7
        p1.Input=p1.Input/10;//111/10=11 11/10=1 1/10=0
        base=base*2;//1*2=2 2*2=4 4*2=8

    }
    p1.output=decimal;
    printf("The Decimal number is:%d\n",p1.output);
    fprintf(fp,"%d\n",p1.output);
     fclose(fp);
}
void BtoO()
{

    FILE *fp;
    fp = fopen("CONVERSION.text","a");
    int binary,octal=0,base=1,rem;
    printf("Enter your Binary number:");
    scanf("%d",&p1.Input);

    while(p1.Input!=0)
    {
        rem=p1.Input%10;//100%10=0 10%10=0 1%10=1
        octal=octal+rem*base;//0+0*1=0 0+0*2=0 0+1*4=4

        base=base*2;//1*2=2 2*2=4 4*2=8
        p1.Input=p1.Input/10;//100/10=10 10/10=1 1/10=0

    }
    p1.output=octal;
    printf("The Octal number is:%o\n",p1.output);
    fprintf(fp,"%o\n",p1.output);
    fclose(fp);

}
void BtoH()
{

    FILE *fp;
    fp = fopen("CONVERSION.text","a");
    int binary,Hexadecimal=0,base=1,rem;
    printf("Enter your Binary number:");
    scanf("%d",&p1.Input);

    while(p1.Input!=0)
    {
        rem=p1.Input%10;//100%10=0 10%10=0 1%10=1
        Hexadecimal=Hexadecimal+rem*base;//0+0*1=0 0+0*2=0 0+1*4=4

        base=base*2;//1*2=2 2*2=4 4*2=8
        p1.Input=p1.Input/10;//100/10=10 10/10=1 1/10=0

    }
    p1.output=Hexadecimal;
    printf("The Hexadecimal number is:%X\n",p1.output);
    fprintf(fp,"%x\n",p1.output);
     fclose(fp);
}

void OtoD()
{

    FILE *fp;
    fp = fopen("CONVERSION.text","a");
    int octal,decimal=0,base=1,rem;
    printf("Enter the octal number:");
    scanf("%d",&p1.Input);

    while(p1.Input!=0)
    {
        rem=p1.Input%10;// 167%10=7 16%10=6 1%10=1
        decimal=decimal+rem*base;//0+7*1=7 7+6*8=55 55+1*64=119

        p1.Input=p1.Input/10;//167/10=16 16/10=1 1/10=0
        base=base*8;//1*8=8 8*8=64 64*8=512
    }
    p1.output=decimal;
    printf("The decimal number is: %d\n",p1.output);
    fprintf(fp,"%d\n",p1.output);
    fclose(fp);
}
void OtoB()
{

    FILE *fp;
    fp = fopen("CONVERSION.text","a");
    int octal, decimal=0,binary=0,base=1,rem,i;
    printf("Enter the octal number:");
    scanf("%d",&p1.Input);

    while(p1.Input!=0)

    {
        rem=p1.Input%10;// 167%10=7 16%10=6 1%10=1
        decimal=decimal+rem*base;//0+7*1=7 7+6*8=55 55+1*64=119

        p1.Input=p1.Input/10;//167/10=16 16/10=1 1/10=0
        base=base*8;//1*8=8 8*8=64 64*8=512

    }
    i=1;
    while(decimal!=0)
    {
        binary+=(decimal%2)*i;
        decimal/=2;
        i*=10;


    }
    p1.output=binary;
    printf("The Binary number is : %d\n", p1.output);
    fprintf(fp,"%d\n",p1.output);
    fclose(fp);

}

void OtoH()
{

    FILE *fp;
    fp = fopen("CONVERSION.text","a");
    int octal,hexadecimal=0,base=1,rem;
    printf("Enter the octal number:");
    scanf("%d",&p1.Input);

    while(p1.Input!=0)
    {
        rem=p1.Input%10;
        hexadecimal=hexadecimal+rem*base;

        p1.Input=p1.Input/10;
        base=base*8;
    }
    p1.output=hexadecimal;
    printf("The Hexadecimal number is: %X\n",p1.output);
    fprintf(fp,"%x\n",p1.output);
    fclose(fp);
}

void HtoD()

{

    FILE *fp;
    fp = fopen("CONVERSION.text","a");
    int hexadecimal,decimal=0,base=1,rem;
    printf("Enter the Hexadecimal number:");
    scanf("%X",&p1.Input);
    while (p1.Input!=0)
    {
        rem=p1.Input%10;
        decimal=decimal+rem*base;
        p1.Input=p1.Input/10;
        base=base*16;
    }
    p1.output=decimal;
    printf("The Decimal number is: %x\n",p1.output);
    fprintf(fp,"%x\n",p1.output);
    fclose(fp);
}

void HtoB()

{

    char hex[17], bin[65] = "";
    int i = 0;

    printf("Enter the Hexadecimal number = ", hex);
    scanf("%s", hex);
    strcpy(h1.input,hex);

    for(i=0; hex[i]!= '\0'; i++)
    {
        switch(hex[i])
        {
        case '0':
            strcat(bin, "0000");
            break;
        case '1':
            strcat(bin, "0001");
            break;
        case '2':
            strcat(bin, "0010");
            break;
        case '3':
            strcat(bin, "0011");
            break;
        case '4':
            strcat(bin, "0100");
            break;
        case '5':
            strcat(bin, "0101");
            break;
        case '6':
            strcat(bin, "0110");
            break;
        case '7':
            strcat(bin, "0111");
            break;
        case '8':
            strcat(bin, "1000");
            break;
        case '9':
            strcat(bin, "1001");
            break;
        case 'a':
        case 'A':
            strcat(bin, "1010");
            break;
        case 'b':
        case 'B':
            strcat(bin, "1011");
            break;
        case 'c':
        case 'C':
            strcat(bin, "1100");
            break;
        case 'd':
        case 'D':
            strcat(bin, "1101");
            break;
        case 'e':
        case 'E':
            strcat(bin, "1110");
            break;
        case 'f':
        case 'F':
            strcat(bin, "1111");
            break;
        default:
            printf ("\n");

            printf("Invalid hexadecimal input.");

        }
    }
    printf("Binary number = %s\n", bin);
    strcpy(h1.output,bin);

    return 0;
}

void HtoO()
{
    FILE *fp;
    fp = fopen("CONVERSION.text","a");
    printf("Enter the Hexadecimal Number:");
    scanf("%X",&p1.Input);
    p1.output=p1.Input;
    printf("The Octal  number is :%o\n",p1.output);
    fprintf(fp,"%o",p1.output);
    fclose(fp);
}
void all()
{
    FILE *fp;
    fp = fopen("CONVERSION.text","r");
    int c;
    while(1)
    {
        c=fgetc(fp);
        if(c==EOF){
            break;
        }

        printf("%c",c);
    }
   fclose(fp);
}

int main()
{

    system("COLOR 09  ");
    int n,j,k,kp;
    k=kp=0;
    printf("\t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\t \t \t \t \t \xB2                 \xB2\n");
    printf("\t \t \t \t \t \xB2 BASE CONVERTION \xB2\n");
    printf("\t \t \t \t \t \xB2                 \xB2\n");
    printf("\t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n \n");
    printf("\t \t \t \t \t1.Decimal to Binary\n");
    printf("\t \t \t \t \t2.Decimal to Octal\n");

    printf("\t \t \t \t \t3.Decimal to Hexadecimal\n");

    printf("\t \t \t \t \t4.Binary to Decimal\n");

    printf("\t \t \t \t \t5.Binary to Octal\n");

    printf("\t \t \t \t \t6.Binary to Hexadecimal\n");

    printf("\t \t \t \t \t7.Octal to Decimal\n");

    printf("\t \t \t \t \t8.Octal to Binary\n");

    printf("\t \t \t \t \t9.Octal to Hexadecimal\n");

    printf("\t \t \t \t \t10.Hexadecimal to Decimal\n");

    printf("\t \t \t \t \t11.Hexadecimal to Binary\n");

    printf("\t \t \t \t \t12.Hexadecimal to Octal\n");

    printf("\t \t \t \t \t13.See all previous conversions\n");

    printf("\n Enter your choice:\n");

    while(1)
    {
        scanf("%d",&n);

        if(n==0)

            break;

        if(n==1) DtoB();
        else if(n==2) DtoO();

        else if(n==3) DtoH();

        else if(n==4) BtoD();

        else if(n==5) BtoO();

        else if(n==6) BtoH();

        else if(n==7) OtoD();

        else if(n==8) OtoB();

        else if(n==9) OtoH();

        else if(n==10) HtoD();

        else if(n==11) HtoB();

        else if(n==12) HtoO();

        else if(n==13) all();

        else printf("Wrong Input\n");

    }

}
