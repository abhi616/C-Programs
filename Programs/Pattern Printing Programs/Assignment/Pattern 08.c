/*

    Output :
             15
             20  25
             30  35  40
             45  50  55  60
             65  70  75  80  85

*/

#include<stdio.h>
#include<conio.h>


int main()
{
      int i,j,No=15;

        printf("\n");

        for(i=1;i<=5;i++)
         {
          for(j=1;j<=i;j++,No=No+5)
            {
               printf(" %d ",No);
            }
           printf("\n");
         }

      getch();
      return 0;
 }
