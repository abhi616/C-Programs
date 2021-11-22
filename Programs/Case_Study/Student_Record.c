#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int i = 0;

struct Student
{
    char Name[50];
    int R_No;
    char Course[20];
    char City[30];

};

struct Student sObj[];

void Add_New_Student();
void Update_Student();
void Search_Student();
void Display_Student_Details();

int main()
{
     int Choice;

     UP:
     printf("\n******************************* Welcome *******************************\n");

     printf("\n\t 1.Add New Student \n\t 2.Display All Student \n\t 3.Search Student \n\t 4.Exit");

     printf("\n\n Enter Your Choice : ");
     scanf("%d",&Choice);

     switch(Choice)
     {
         case 1 :
                 Add_New_Student();
                 printf("\n Press Any Key To Go Back...");
                 getch();
                 system("cls");
                 goto UP;

         case 2:
                Display_Student_Details();
                system("cls");
                goto UP;

         case 3:
                Search_Student();
                system("cls");
                goto UP;

         case 4:
                break;

         default :
                   printf("\n Invalid Choice.Please Enter Valid Choice...!!!!\n\n Press Any Key To Go Back...");
                   getch();
                   system("cls");
                   goto UP;
      }

      printf("\n\n Thanks For Coming...!!!!\n");

     return 0;
}


void Add_New_Student()
{
     printf("\n-----------------------------------------------------------------\n");

         printf("\n Enter %d Student Details : \n",i+1);

         fflush(stdin);
         printf("\n Enter Your Name : ");
         scanf("%[^\n]",&sObj[i].Name);


         printf("\n Enter Your Roll No : ");
         scanf("%d",&sObj[i].R_No);

         printf("\n Enter Your Course : ");
         scanf("%s",&sObj[i].Course);

         printf("\n Enter Your City : ");
         scanf("%s",&sObj[i].City);

         printf("\n-----------------------------------------------------------------\n");


     printf("\n Press Any Key To Save Information.\n");
     getch();

     printf("\n\n\t**************** Information Saved Succefully... ****************\n\n");

     i++;

     return;

}


void Display_Student_Details()
{
     if(i==0||i<0)
     {
         printf("\n Sorry. Yet You Are Not Added Any Student.\n\n Press Any Key To Go Back...\n\n");
         getch();
         system("cls");
         return;
     }

     printf("\n-----------------------------------------------------------------\n");

     printf("\n\n\t\t\t\t\t\t---------------------------\n\t\t\t\t\t\t| Total Student Entry = %d |\n\t\t\t\t\t\t---------------------------\n",i);


     for(int j=0;j<i;j++)
     {
         printf("\n %d Student Details : \n",j+1);

         printf("\n\t Student Roll No : %d",sObj[j].R_No);
         printf("\n\t Student Name : %s",sObj[j].Name);
         printf("\n\t Student Course : %s",sObj[j].Course);
         printf("\n\t Student City : %s",sObj[j].City);

          printf("\n\n-----------------------------------------------------------------\n");
     }

     getch();
     return;
}


void Search_Student()
{
     int RNo=0,Cnt=0;
     char Ch='\0';

     if(i==0||i<0)
     {
         printf("\n Sorry. Yet You Are Not Added Any Student.\n\n Press Any Key To Go Back...\n\n");
         getch();
         system("cls");
         return;
     }

     Up:
     printf("\n Enter Roll No : ");
     scanf("%d",&RNo);


     for(int j=0;j<i;j++)
     {
         if(RNo==sObj[j].R_No)
         {
              Cnt++;
              printf("\n-----------------------------------------------------------------\n");

              printf("\n Student Detail Of Roll No %d : \n",RNo);

              printf("\n\t Student Name : %s",sObj[j].Name);
              printf("\n\t Student Course : %s",sObj[j].Course);
              printf("\n\t Student City : %s",sObj[j].City);

              printf("\n\n-----------------------------------------------------------------\n");

              printf("\nPress Any Key To Go Back...!\n");

         }
     }

     if(Cnt==0)
     {
        printf("\n No Such Record Found.\n");
        fflush(stdin);
        printf("\n\n You Want To Search Again(Y/N) ?\n");
        scanf("%c",&Ch);

         if(Ch=='Y' || Ch=='y')
         {
             printf("\n\n-----------------------------------------------------------------\n");
             fflush(stdin);
             goto Up;
         }
        else
        {
          return;
        }
     }

   getch();
   return;
}



