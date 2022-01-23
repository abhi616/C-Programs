/*

    Output :
             A
             B  C
             D  E  F
             G  H  I  J
             K  L  M  N  O

*/

#include<stdio.h>
#include<conio.h>


int main()
{
      int i,j;
      char ch='A';

         for(i=1;i<=5;i++)
         {
           for(j=1;i>=j;j++)
            {
                printf(" %c ",ch++);
            }
           printf("\n");
         }

      getch();
      return 0;
 }
