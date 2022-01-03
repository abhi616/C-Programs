/*

   Input :
          Enter Principle(Amount) : 1000

          Enter Rate Of Interest : 5

          Enter Time(year) : 2


   Output :

         Simple Interest = 100.00

*/

#include<stdio.h>
#include<conio.h>


int main()
{
    int P,R,T;
    float S_I;

    printf("\n Enter Principle(Amount) : ");
    scanf("%d",&P);

    printf("\n Enter Rate Of Interest : ");
    scanf("%d",&R);

    printf("\n Enter Time(year) : ");
    scanf("%d",&T);

    S_I = (P*R*T)/100;

    printf("\n--------------------------------------------------\n");

    printf("\n Simple Interest = %.2f \n",S_I);

    printf("\n--------------------------------------------------\n");

    getch();
    return 0;
}
