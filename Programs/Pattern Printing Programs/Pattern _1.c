#include<stdio.h>
#include<conio.h>

int main()
{
        int Cnt;

         Up:
         printf("\n Enter Count To Print Pattern : ");
         scanf("%d",&Cnt);


        if(Cnt%2!=0)
         {
            printf("\n\t");

            for(int i=1;i<=Cnt;i++)
             {
               for(int j=1;j<=Cnt;j++)
                {
                   if(i==1||i==Cnt||j==1||j==Cnt||i==Cnt/2+1||j==Cnt/2+1)
                    {

                         printf("* ");

                    }
                   else
                    {

                         printf("  ");

                    }
                }

               printf(" \n\t");

              }
          }
         else
          {
                printf("\n Please Enter Odd Count...\n\n");
                goto Up;
          }

        return 0;
}
