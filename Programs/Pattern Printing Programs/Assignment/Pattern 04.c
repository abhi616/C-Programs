/*

    Output :
             A
             B  B
             C  C  C
             D  D  D  D
             E  E  E  E  E

*/


#include <stdio.h>
#include<conio.h>


int main()
{
      int i,j;
      char ch='A';

        for(i=1;i<=5;i++,ch++)
         {
          for(j=1;i>=j;j++)
            {
               printf(" %c ",ch);
            }
           printf("\n");
         }

      getch();
      return 0;
 }
