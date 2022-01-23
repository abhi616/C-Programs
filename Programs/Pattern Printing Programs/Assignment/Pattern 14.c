/*

    Output :
             A  A  A  A  A
             B           B
             C           C
             D           D
             E  E  E  E  E

*/


#include <stdio.h>
#include<conio.h>


int main()
{
      char ch='A';
      int i,j;

         printf("\n");

         for(i=1;i<=5;i++,ch++)
          {
            for(j=1;j<=5;j++)
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
