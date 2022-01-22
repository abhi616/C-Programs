/*

    Input : Enter character To Print pattern : A

    Output :
             A
             A  A
             A  A  A
             A  A  A  A
             A  A  A  A  A

*/

#include<stdio.h>
#include<conio.h>


int main()
{
      int i,j;
      char ch;

        printf("\n Enter character To Print pattern: ");
        scanf("%c",&ch);

        for(i=1;i<=5;i++)
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
