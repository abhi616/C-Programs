/*

    Output :
             A
             A  B
             A  B  C
             A  B  C  D
             A  B  C  D  E

*/


#include<stdio.h>
#include<conio.h>

int main()
{
      int i,j;
      char ch='A';

         for(i=1;i<=5;i++)
         {
          for(j=1,ch='A';i>=j;j++,ch++)
            {
               printf(" %c ",ch);
            }
           printf("\n");
         }


      getch();
      return 0;
 }
