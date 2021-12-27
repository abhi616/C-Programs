/*

   Input : Enter Count To Print Pattern:5

   Output :         A B C D E
                    A B C D
                    A B C
                    A B
                    A

*/


#include<stdio.h>
#include<conio.h>

int main()
{
      char Ch;
      int Cnt;

       printf("Enter Count To Print Pattern:");
       scanf("%d",&Cnt);

        printf("\n\t");
        for(int i=Cnt;i>=1;i--)
         {
          for(int j=1,Ch='A';j<=i;j++,Ch++)
           {

            {
                printf("%c ",Ch);
            }

           }
              printf(" \n\t");
         }

    getch();
    return 0;
}
