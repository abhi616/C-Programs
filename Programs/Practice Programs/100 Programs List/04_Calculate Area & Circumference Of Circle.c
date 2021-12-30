#include<stdio.h>
#include<conio.h>


int main()
{
     float Rad,Area,Circum;
     const float Pi = 3.14;

     printf("\n Enter Radius Of Circle : ");
     scanf("%f",&Rad);

     Area = Pi*Rad*Rad;

     Circum = 2*Pi*Rad;

     printf("\n-------------------------------------------------\n");
     printf("\n Area Of Circle = %.2f\n\n Circumference Of Circle = %.2f",Area,Circum);
     printf("\n\n-------------------------------------------------\n");

     getch();
     return 0;

}

