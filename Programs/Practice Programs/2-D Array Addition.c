#include<stdio.h>
#include<conio.h>


int main()
{
     int Arr[3][2],i,j;

     // Accept 2-D Array Elemets
     for(i=0;i<3;i++)
     {
         for(j=0;j<2;j++)
         {
             printf("\n Enter [%d][%d] Element : ",i,j);
             scanf("%d",&Arr[i][j]);
         }
     }

     printf("\n--------------------------------------------------------------\n");

     printf("\n 2-D Array Elements Are as follows : \n");

     // Display 2-D Array Elements
     for(i=0;i<3;i++)
     {
         for(j=0;j<2;j++)
         {
            printf("\n\t\t Arr[%d][%d] Element = %d\n",i,j,Arr[i][j]);
         }
     }

    printf("\n--------------------------------------------------------------\n");

     getch();
     return 0;
}
