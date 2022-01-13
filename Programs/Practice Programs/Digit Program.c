/*

      Input :
                 Enter Number : 3

                 Enter 2nd Number : 5

                         Number = 3     (3*3 = 9)

                         Number = 9     (9*9 = 81)

                         Number = 81    (81*8 = 648)

                         Number = 648   (648*6 = 3888)

                         Number = 3888

      Output :

                 Final Number = 3888



*/

#include<stdio.h>
#include<conio.h>

int main()
{
     int N,K,i,Rem=1,Res;

     printf("\n Enter 1st Number : ");
     scanf("%d",&N);

     printf("\n Enter 2nd Number : ");
     scanf("%d",&K);

     printf("\n----------------------------------------\n");

     // Traverse Till The 2nd Number
     for(i=0;i<K;i++)
     {
         Res = N * Rem;
         Rem = Res;

         // Seperate Out Each Digit From The Generated Number(Res) Till The Last Digit Of Number.
         for(;Res>0;Res/=10)
         {
             N = Res%10;
         }

          printf("\n\t Number = %d (%d * %d)\n",Rem,N,Rem);
     }

     printf("\n----------------------------------------\n");

     printf("\n ==> Final Number = %d\n",Rem);

     printf("\n----------------------------------------\n");

     getch();
     return 0;
}
