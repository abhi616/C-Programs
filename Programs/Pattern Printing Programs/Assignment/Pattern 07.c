/*

    Output :
             7
             14  21
             28  35  42
             49  56  63  70
             77  84  91  98  105

*/

#include <stdio.h>
#include<conio.h>


int main()
{
      int i,j,No=7;

        for(i=1;i<=5;i++)
         {
          for(j=1;i>=j;j++,No=No+7)
            {
               printf(" %d ",No);
            }
           printf("\n");
         }

      getch();
      return 0;
 }
