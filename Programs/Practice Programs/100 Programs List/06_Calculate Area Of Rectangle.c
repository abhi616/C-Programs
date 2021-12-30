#include<stdio.h>
#include<conio.h>


int main()
{
     float l,w,Area;

     printf("\n Enter length : ");
     scanf("%f",&l);

     printf("\n Enter width : ");
     scanf("%f",&w);

     Area = l*w;

     printf("\n-------------------------------------------------\n");
     printf("\n Area Of Rectangle = %.2f\n",Area);
     printf("\n-------------------------------------------------\n");

     getch();
     return 0;

}

