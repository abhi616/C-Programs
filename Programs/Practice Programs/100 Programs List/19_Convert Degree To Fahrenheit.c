/*

   Input :

          Enter Temperature In Celcius : 0

   Output :

          Temperature In Fahrenheit = 32.00

*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float Cel,Fah;

    printf("\n Enter Temperature In Celcius : ");
    scanf("%f",&Cel);

    Fah = Cel*(9/5)+32;

    printf("\n--------------------------------------------------\n");

    printf("\n Temperature In Fahrenheit = %.2f \n",Fah);

    printf("\n--------------------------------------------------\n");

    getch();
    return 0;
}
