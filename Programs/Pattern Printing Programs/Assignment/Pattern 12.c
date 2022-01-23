/*

    Input : Enter Number To Print pattern: 5

    Output :
             5
             5  5
             5  5  5
             5  5  5  5
             5  5  5  5  5

*/

#include <stdio.h>
#include<conio.h>


int main()
{
      int i,j,No;

        printf("\n Enter Number To Print pattern: ");
        scanf("%d",&No);

         printf("\n");

         for(i=1;i<=5;i++)
          {
            for(j=1;i>=j;j++)
             {
                printf(" %d ",No);
             }
            printf("\n");
          }

      getch();
      return 0;
 }
