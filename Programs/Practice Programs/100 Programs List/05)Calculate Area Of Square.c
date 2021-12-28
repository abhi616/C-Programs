#include<stdio.h>
#include<conio.h>


int main()
{
     float a,Area;

     printf("\n Enter Side Of Square : ");
     scanf("%f",&a);

     Area = a*a;

     printf("\n-------------------------------------------------\n");
     printf("\n Area Of Square = %.2f\n",Area);
     printf("\n\n-------------------------------------------------\n");

     getch();
     return 0;

}
