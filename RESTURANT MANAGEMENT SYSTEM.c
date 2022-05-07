#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char name[30];
    char seats[10];
    char phone[12];
    int menu;
    int quantity;
    int payment;
    struct node *next;

} * head, *temp, *find;

void AllMenu();
void AllSeats();
void AvailableSeats();
int OrderNow();
void Add();
void CancelOrder();
void ShowOrderList(int n);
void EditOrder();
//void Exit();

int main()
{
    char T1[10] = "Table-1";
    char T2[10] = "Table-2";
    char T3[10] = "Table-3";
    char T4[10] = "Table-4";
    char T5[10] = "Table-5";
    char T6[10] = "Table-6";
    char T7[10] = "Table-7";
    char T8[10] = "Table-8";
    char T9[10] = "Table-9";
    char T10[10] = "Table-10";
    char T11[10] = "Table-11";
    char T12[10] = "Table-12";

    Add(T1);
    Add(T2);
    Add(T3);
    Add(T4);
    Add(T5);
    Add(T6);
    Add(T7);
    Add(T8);
    Add(T9);
    Add(T10);
    Add(T11);
    Add(T12);

    int i, num, q;
    do
    {
        printf("\n");
        printf("============ WELCOME TO RESTAURANT SERVICE SYSTEM ============\n\n");
        printf("\t\t\t[1]=> All Menu");
        printf("\n");
        printf("\t\t\t[2]=> All Seats");
        printf("\n");
        printf("\t\t\t[3]=> Available Seats");
        printf("\n");
        printf("\t\t\t[4]=> Order Now");
        printf("\n");
        printf("\t\t\t[5]=> Cancel Order");
        printf("\n");
        printf("\t\t\t[6]=> Edit Order");
        printf("\n");
        printf("\t\t\t[7]=> Show Order List");
        printf("\n");
        printf("\t\t\t[8]=> Press 8 to exit\n\n");
        printf("===============================================================\n\n");
        printf("\t\t\tEnter Your Choice:: ");
        scanf("%d", &num);
        getchar();

        switch (num)
        {
        case 1:
            AllMenu();
            break;
        case 2:
            AllSeats();
            break;
        case 3:
            AvailableSeats();
            break;
        case 4:
            q = OrderNow();
            break;
        case 5:
            CancelOrder();
            break;
        case 6:
            EditOrder();
            break;
        case 7:
            ShowOrderList(q);
            break;
        case 8:
            exit(8);
            break;
        }

    } while (num != 15);
    printf("\t----------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\tThank You For Using This System\t\t\t\t\t\t\n");
    printf("\t----------------------------------------------------------------------------------------------------------\n");
    // getch();

    return 0;
}

void AllMenu()
{

    printf("\n\t\t************MENU************\n\n");
    printf("\tNo\t\t\tItem\t\t\t\t Taka\n");
    printf("\t1.\tKacchi, Chicken Roast, Borhani, Water\t\t 450 Tk\n");
    printf("\t2.\tMorog Polao, Jali Kabab, Borhani, Water\t\t 350 Tk\n");
    printf("\t3.\tPlain Polao, Chicken Roast, Borhani, Water\t 250 Tk\n");
}

void AllSeats()
{
    printf("\n\t\t************SEATS************\n\n");
    printf("\t  Table-1\tTable-2\t\tTable-3\n");
    printf("\t  Table-4\tTable-5\t\tTable-6\n");
    printf("\t  Table-7\tTable-8\t\tTable-9\n");
    printf("\t  Table-10\tTable-11\tTable-12\n\n");
    printf("\n\t\t****Each Table Contain Four Seats****\n\n");
}

void Add(char str[])
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    char strr[30] = "empty";

    strcpy(newNode->seats, str);
    strcpy(newNode->name, strr);
    strcpy(newNode->phone, strr);
    //strcpy(newNode->menu, strr);

    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int OrderNow()
{
    int i, n;
    printf("How many seats do you need?\n");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++)
    {
        char num[12];
        printf("Enter Seat Number: ");
        gets(num);

        temp = head;

        while (temp != NULL)
        {
            if (strcmp(temp->seats, num) == 0)
            {
                puts(temp->seats);
                break;
            }
            else
            {

                temp = temp->next;
            }
        }

        if (temp == NULL)
        {
            printf("Wrong Input!!!\n");
        }
        else
        {

            find = temp;
            char string[10] = "empty";

            if (strcmp(find->name, string) != 0)
            {
                printf("The seat is already booked\n");
            }
            else
            {
                printf("Input your infortmation\n");

                printf("Name: ");
                gets(find->name);
                printf("Phone No:");
                gets(find->phone);
                printf("Menu: ");
                scanf("%d", &find->menu);
                printf("Quantity: ");
                scanf("%d", &find->quantity);
                getchar();
            }
        }
    }
    return find->quantity;
}
void ShowOrderList(int n)
{
    temp = head;
    char str[30] = "empty";

    printf("All Booked Seat List\n");
    while (temp != NULL)
    {

        if (strcmp(temp->name, str) != 0)
        {

            printf("Name:");
            puts(temp->name);

            printf("phone:");
            puts(temp->phone);

            printf("Seat No:");
            puts(temp->seats);

            printf("Menu: %d\n", temp->menu);
            temp->payment = 0;
            if (temp->menu == 1)
            {
                temp->payment = 450 * n;
                printf("Total Payable Ammount: %d Tk.", temp->payment);
            }
            else if (temp->menu == 2)
            {
                temp->payment = 350 * n;
                printf("Total Payable Ammount: %d Tk.", temp->payment);
            }
            else if (temp->menu == 3)
            {
                temp->payment = 250 * n;
                printf("Total Payable Ammount: %d Tk.", temp->payment);
            }

            printf("\n");
            temp = temp->next;
        }

        else
        {
            temp = temp->next;
        }
    }
}

void AvailableSeats()
{
    temp = head;
    char str[30] = "empty";

    printf("Availabe Seat List\n");
    while (temp != NULL)
    {

        if (strcmp(temp->name, str) == 0)
        {

            printf("Seat No:");
            puts(temp->seats);

            printf("\n");
            temp = temp->next;
        }

        else
        {
            temp = temp->next;
        }
    }
}
void EditOrder()
{
    char str[30];
    printf("Enter Name:");
    gets(str);

    temp = head;

    while (temp != NULL)
    {
        if (strcmp(temp->name, str) == 0)
        {
            puts(temp->seats);
            break;
        }
        else
        {

            temp = temp->next;
        }
    }

    if (temp == NULL)
    {
        printf("Didn't Find any Information!!!\n");
        printf("Please Check Before Inputting Any Data.\n");
    }
    else
    {
        find = temp;
        printf("Edit your infortmation\n");

        printf("Name: ");
        gets(find->name);
        printf("Phone No:");
        gets(find->phone);
        printf("Menu: ");
        scanf("%d", &find->menu);
        printf("Quantity: ");
        scanf("%d", &find->quantity);

        getchar();
    }
}
void CancelOrder()
{
    char str[30];
    printf("Enter Name:");
    gets(str);
    temp = head;

    while (temp != NULL)
    {
        if (strcmp(temp->name, str) == 0)
        {

            puts(temp->seats);
            break;
        }
        else
        {

            temp = temp->next;
        }
    }

    if (temp == NULL)
    {
        printf("Didn't Find any Information!!!\n");
        printf("Please Check Before Inputting Any Data.\n");
    }
    else
    {
        find = temp;
        char string[30] = "empty";
        strcpy(find->name, string);
        strcpy(find->phone, string);
    }
}
