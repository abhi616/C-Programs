/*

    Output :
             A  B  C  D  E
             A           E
             A           E
             A           E
             A  B  C  D  E

*/


#include<stdio.h>
#include<conio.h>


int main()
{
      char ch;
      int i,j;

         printf("\n");

         for(i=1;i<=5;i++)
         {
           for(j=1,ch='A';j<=5;j++,ch++)
            {
               if(i==1||j==1||i==5||j==5)
                {
                   printf(" %c ",ch);
                }
               else
               {
                    printf("   ");
               }

            }
           printf("\n");
         }

      getch();
      return 0;
 }
