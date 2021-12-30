#include<stdio.h>
#include<conio.h>


int main()
{
     float a,Volume;

     printf("\n Enter Edge : ");
     scanf("%f",&a);

     Volume = a*a*a;

     printf("\n-------------------------------------------------\n");
     printf("\n Volume Of Cube = %.2f\n",Volume);
     printf("\n-------------------------------------------------\n");

     getch();
     return 0;

}

