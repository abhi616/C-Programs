#include<stdio.h>
#include<conio.h>


int main()
{
     float Rad,Height,Volume;
     const float Pi = 3.14;

     printf("\n Enter Raduis : ");
     scanf("%f",&Rad);

     printf("\n Enter Height : ");
     scanf("%f",&Height);

     Volume = Pi*Rad*Rad*Height;

     printf("\n-------------------------------------------------\n");
     printf("\n Volume Of Cylinder = %.2f\n",Volume);
     printf("\n-------------------------------------------------\n");

     getch();
     return 0;

}
