#include<stdio.h> // admin username -librarian  pass-1234
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct library
{
    char bkname[30];
    char catagory[30];
    int pages;
    int amount;
} l[100];
struct password
{
    int id;
    char password[33];
    char password1[33];

} p[100];
char ad_user[30];
char ad_pass[9];
char mm_user[30];
char mm_pass[9];
char ctnm[30];
char bknm[30];
int  keepcount=0;
int keepcount1=0;
int i,j;


int main()
{
    system("COLOR 9F  ");
    welcomepage();
    system("cls");
    topscreen();
    int m=0;
    printf("\n \n \n 1. log in \n");
    printf("\n 2. create \n");
    printf("\n 3. exit \n");
    scanf("%d",&m);
    system("cls");
    while(m!=3)
    {
        int i,j,k,n,p;
        i=keepcount;
        switch(m)
        {
        case 1:
            n = login();
            break;
        case 2:
            create();
            break;
        case 3:
            exit(0);
        }
        if(n==1)
        {
            system("cls");
            topscreen();
            m=0;
            while(m!=8)
            {
                system("cls");
                topscreen();
                printf("\n 1. Add book information\n");
                printf(" 2. Display book information\n");
                printf(" 3. List all books of given catagory\n");
                printf(" 4. List the title of specified book\n");
                printf(" 5. List the count of books in the library\n");
                printf(" 6. back \n");
                printf(" 7. delete books \n");
                printf (" \n \n\nEnter one of the above : ");
                scanf("%d",&m);
                system("cls");
                i=keepcount;
                if(m==1)
                {
                    keepcount=add(i);
                }
                else if(m==2)
                {
                    system("cls");
                    topscreen();
                    printf("Book's informations\n");
                    for(i=0; i<keepcount; i++)
                    {
                        display(i, keepcount);

                    }
                }
                else if(m==3)
                {
                    searchct(  keepcount);

                }
                else if(m==4)
                {
                    searchbk( keepcount);

                }
                else if(m==5)
                {
                    system("cls");
                    topscreen();
                    int type;
                    int total=0;
                    printf("types of books = %d \n",keepcount);
                    for(int i=0; i<keepcount; i++)
                    {
                        total=total+l[i].amount;
                    }
                    printf("number of books = %d \n",total);
                    getch();
                }
                else if(m==6)
                {
                    main();
                }
                else if(m==7)
                {
                    int l;
                    printf("enter the position");
                    scanf("%d",&l);
                    keepcount=deletebook(l, keepcount);
                }
            }
        }
        else if(n==2)
        {
            system("cls");
            m=0;
            while(m!=7)
            {
                system("cls");
                topscreen();
                printf("\n 1. Add book information\n");
                printf(" 2. Display book information\n");
                printf(" 3. List all books of given catagory\n");
                printf(" 4. List the title of specified book\n");
                printf(" 5. types books in the library\n");
                printf(" 6. back \n");
                printf(" 7. borrow books");
                printf (" \n \n\nEnter one of the above : ");
                scanf("%d",&m);
                i=keepcount;
                if(m==1)
                {
                    {
                        keepcount=add(i);
                    }

                }
                else if(m==2)
                {
                    display(i, keepcount);

                }
                else if(m==3)
                {
                    searchct( keepcount);

                }
                else if(m==4)
                {
                    searchbk( keepcount);

                }
                else if(m==5)
                {
                    system("cls");
                    topscreen();
                    int type;
                    int total=0;
                    printf("types of books = %d \n",keepcount);
                    for(int i=0; i<keepcount; i++)
                    {
                        total=total+l[i].amount;
                    }
                    printf("number of books = %d \n",total);
                }
                else if(m==6)
                {
                    main();
                }
                else if(m==7)
                {
                    system("cls");
                    topscreen();
                    printf (" \n Enter book name : ");
                    scanf ("%s",bknm);
                    for (i=0; i<keepcount; i++)
                    {
                        if (strcmp(bknm, l[i].bkname) == 0)
                        {
                            printf (" \n \t book name     = %s",l[i].bkname);
                            printf (" \n \t catagory name = %s",l[i].catagory);
                            printf (" \n \t pages         = %d",l[i].pages);
                            printf (" \n \t amount        = %d",l[i].amount);

                            printf (" \n Enter 1 to borrow : ");
                            scanf("%d",&p);
                            if(p==1)
                            {
                                int a;
                                printf("number of book you want to borrow=");
                                scanf("%d",&a);
                                if(a>=l[i].amount)
                                    printf("%d amount of %s is not present",a,bknm);
                                else
                                    l[i].amount=l[i].amount-a;
                                printf("you borrowed the book: %s",bknm);
                                if(l[i].amount<=0)
                                    deletebook( i, keepcount);
                            }
                        }
                        else printf("there are no books of this name");
                    }
                    getch();
                }
            }
        }
    }
    return 0;
}

int welcomepage()
{
    printf("\n \t\t\t <<<<<<<<<<<<^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^>>>>>>>>>>>>  ");
    printf("\n \t\t\t <<<<<<<<<<<<                                                   >>>>>>>>>>>>  ");
    printf("\n \t\t\t <<<<<<<<<<<<      Library management System Project in C       >>>>>>>>>>>>  ");
    printf("\n \t\t\t <<<<<<<<<<<<                                                   >>>>>>>>>>>>  ");
    printf("\n \t\t\t <<<<<<<<<<<<vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv>>>>>>>>>>>>  ");
    printf("\n \t\t\t ---------------------------------------------------------------------------  ");
    printf("\n \n\n\n  ");
    printf("\n \t\t\t  __________________________________________________________________________ \n ");
    printf("\n \t\t\t                \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  ");
    printf("\n \t\t\t                \xB2                 WELCOME                   \xB2  ");
    printf("\n \t\t\t                \xB2                   TO                      \xB2  ");
    printf("\n \t\t\t                \xB2                 LIBRARY                   \xB2  ");
    printf("\n \t\t\t                \xB2               MANAGEMENT                  \xB2  ");
    printf("\n \t\t\t                \xB2                 SYSTEM                    \xB2  ");
    printf("\n \t\t\t                \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  ");
    printf("\n \t\t\t  ___________________________________________________________________________  ");
    printf("\n \n \n Enter any key to continue......");
    getch();
}
int topscreen()
{
    printf("\n \t\t\t <<<<<<<<<<<<^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^>>>>>>>>>>>>  ");
    printf("\n \t\t\t <<<<<<<<<<<<                                                   >>>>>>>>>>>>  ");
    printf("\n \t\t\t <<<<<<<<<<<<      Library management System Project in C       >>>>>>>>>>>>  ");
    printf("\n \t\t\t <<<<<<<<<<<<                                                   >>>>>>>>>>>>  ");
    printf("\n \t\t\t <<<<<<<<<<<<vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv>>>>>>>>>>>>  ");
    printf("\n \t\t\t ---------------------------------------------------------------------------  ");
    printf("\n \n\n\n  ");
}


int adminlg()
{
    int n;
    system("cls");
    topscreen();
    printf("\n write b to go back ");
    printf("\n enter user name = ");
    scanf("%s",ad_user);
    if(strcmp(ad_user,"librarian")==0)
    {
        printf("\n enter user password = ");
        scanf("%s",ad_pass);
        {
            if(strcmp(ad_pass,"1234")==0)
            {
                n=1;
            }
            else if(strcmp(ad_user,"b")==0)
            {
                system("cls");
                main();
            }
            else printf("wrong user password");
        }
    }
    else if(strcmp(ad_user,"b")==0)
    {
        system("cls");
        main();
    }
    else  printf("wrong user name");
    return n;
}
int memberlg()
{
    int n;
    system("cls");
    topscreen();
    printf("\n write b to go back \n");
    printf("\n enter user name = ");
    scanf("%s",ad_user);
    if(strcmp(ad_user,"member")==0)
    {
        printf("\n enter user password = ");
        scanf("%s",ad_pass);
        {
            if(strcmp(ad_pass,"pass")==0)
            {
                n=2;
            }
            else if(strcmp(ad_user,"b")==0)
            {
                system("cls");
                main();
            }
            else printf("wrong user password");
        }
    }
    else if(strcmp(ad_user,"b")==0)
    {
        system("cls");
        main();
    }
    else  printf("wrong user name");
    return n;
}


int add(int i)
{
    system("cls");
    topscreen();
    FILE *fp;
    fp = fopen("LMS.text","a");
    printf (" \n \n \n Enter book name = ");

    scanf ("%s",l[i].bkname);
    fprintf(fp,"\n Name:%s",l[i].bkname);
    printf (" \n Enter catagory name = ");

    scanf ("%s",l[i].catagory);
    fprintf(fp,"\n catagory:%s",l[i].catagory);
    printf (" \n Enter pages = ");

    scanf ("%d",&l[i].pages);
    fprintf(fp,"\n page:%d",l[i].pages);
    printf (" \n Enter amount = ");

    scanf ("%d",&l[i].amount);
    fprintf(fp,"\n amount:%d",l[i].amount);
    fclose(fp);

    keepcount++;
    return keepcount;
    getch();
}


int searchbk( int keepcount)
{
    int i;
    system("cls");
    topscreen();
    printf (" \n Enter book name : ");
    scanf ("%s",bknm);
    for (i=0; i<keepcount; i++)
    {
        if (strcmp(bknm, l[i].bkname) == 0)
        {
            printf (" \n \n \n \t book name     = %s",l[i].bkname);
            printf (" \n \t catagory name = %s",l[i].catagory);
            printf (" \n \t pages         = %d",l[i].pages);
            printf (" \n \t amount        = %d",l[i].amount);
        }
    }
    getch();
}
int searchct( int keepcount)
{
    int i;
    system("cls");
    topscreen();
    printf (" \n Enter catagory name : ");
    scanf ("%s",ctnm);
    for (i=0; i<keepcount; i++)
    {
        if (strcmp(ctnm, l[i].catagory) == 0)
        {
            printf (" \n \n \n \t book name     = %s",l[i].bkname);
            printf (" \n \t catagory name = %s",l[i].catagory);
            printf (" \n \t pages         = %d",l[i].pages);
            printf (" \n \t amount        = %d",l[i].amount);
        }
    }
    getch();
}


int display(int i, int keepcount)
{
    system("cls");
    topscreen();
    printf("Book's informations\n");
    for(i=0; i<keepcount; i++)
    {
        printf (" \n \n \n \t book name = %s",l[i].bkname);
        printf (" \n \t catagory name = %s",l[i].catagory);
        printf (" \n \t  pages = %d",l[i].pages);
        printf (" \n \t  amount = %d",l[i].amount);
    }
    getch();
}
int deletebook(int i,int keepcount)
{

    for(int m=i; m<=keepcount; m++)
    {
        l[m].bkname[30]   = l[m+1].bkname[30];
        l[m].catagory[30] = l[m+1].catagory[30];
        l[m].pages        = l[m+1].pages;
        l[m].amount       = l[m+1].amount;
    }
    keepcount--;
    return keepcount;
    getchar();

}

int login()
{
    int a=0,b=0,i;
    system("cls");
    int ID;
    char pass[30];
    while(1)
    {
        system("cls");
        printf("write -1 to go back");
        printf("ID = ");
        scanf("%d",&ID);
        if(ID == -1)
        {
            main();
        }
        for(i=0; i<=keepcount1; i++)
        {
            if((ID == 9999)||(ID == p[i].id))
            {
                a=1;
            }

        }
        if(a == 1)
        {
            printf("password = ");
            scanf("%s",pass);
            if(strcmp(pass,"-1") == 0)
            {
                main();
            }
            for(i=0; i<=keepcount1; i++)
            {
                if(strcmp(pass,"pic")==0 || strcmp(pass,p[i].password)==0)
                {
                    b=1;
                }
                else if( strcmp(pass,p[i].password1)==0)
                {
                    b=2;
                }
            }

        }

    return b;
    }

}

void create()
{
    int c,j;
    printf(" 1. Admin \n");
    printf(" 2. Member \n");
    scanf("%d",&c);
    j=keepcount1;
    keepcount1=createpass(c,j);
    main();

}

int createpass(int c, int j )
{

    char code[30];
    if(c==1)
    {
        printf("enter the code =");
        scanf("%s",code);
        if(strcmp(code,"pic")==0)
        {
            printf("enter the id =");
            scanf("%d",&p[j].id);
            printf("enter the password =");
            scanf("%s",p[j].password);
            printf(" Account has created");
        }
        keepcount1++;
    }
    if(c==2)
    {


        printf("enter the id =");
        scanf("%d",&p[j].id);
        printf("enter the password =");
        scanf("%s",p[j].password1);
        printf(" Account has created");
        keepcount1++;

    }
    return  keepcount1;

}
