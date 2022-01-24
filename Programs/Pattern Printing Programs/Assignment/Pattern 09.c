/*

    Output :
             0
             1  1
             2  3  5
             8  13  21  34
             55  89  144  233  377

*/

#include<stdio.h>
#include<conio.h>


int main()
{
      int i,j,F=0,S=1,No=0;

         for(i=1;i<=5;i++)
          {
           for(j=1;i>=j;j++)
            {
                   printf(" %d ",No);

                   No=S+F;
                   S=F;
                   F=No;
            }
            printf("\n");
          }

      getch();
      return 0;
 }
