#include<stdio.h>
#include<conio.h>


int main()
{
     float b,h,Area;

     printf("\n Enter base : ");
     scanf("%f",&b);

     printf("\n Enter height : ");
     scanf("%f",&h);

     Area = b*h;

     printf("\n-------------------------------------------------\n");
     printf("\n Area Of Rectangle = %.2f\n",Area);
     printf("\n-------------------------------------------------\n");

     getch();
     return 0;

}
