#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
       char name[30];
       char id[8];
       char course[5];
};

int main(void){
    int option =0;

    while(option!=6){
       system("cls");
       printf("Menu:\n");
       printf("[1] Add Student.\n");
       printf("[2] Display Student.\n");
       printf("[3] Delete Student.\n");
       printf("[4] Delete Student.\n");
       printf("[5] Exit.\n");
       scanf("%d",&option);

       switch(option)
       {
          case 1:
                addStudent();
                break;
          case 2:
                displayinfo();
                break;
          case 3:
                break;
          case 4:
                break;
          default:
                printf("That is not in the options!\nPlease Try again!\n");
                break;
       }

    }
}

addStudent(){
    int i;
    FILE *stream = NULL;
    stream = fopen("studentinfo.txt", "a+");

    struct student s1;
    struct student array[3];//here i wnt 2 apply d malloc but, still didn't know how 2start
    for (i =0; i<1; i++){

       printf("Enter Student ID: ");
       scanf("%s", s1.id);
       fflush(stdin);
       printf("Enter Student Name: ");
       gets(s1.name);
       fflush(stdin);
       printf("Enter Student Course: ");
       scanf("%s", s1.course);

       fprintf(stream, "\n%s,\t%s,\t%s", s1.id, s1.name, s1.course);
    }
       fclose(stream);
    getch();
}
displayinfo(){
    FILE *stream = NULL;
     stream = fopen("studentinfo.txt", "rt");

     char arr[100];
     int i=0;

    while(!feof(stream)){
     fgets(arr, 100, stream);
     printf("%s", arr);
     }

     fclose(stream);
     getch();
}
here's my plan in EDITING MENU:

     printf("enter details: ");
     gets(arr2);

     while(!feof(stream)){
        fgets(arr, 100, stream);
        if(strcmp(arr, arr2)==0){
           //code here
        }

     }
