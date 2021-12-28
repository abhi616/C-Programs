#include<stdio.h>
#include<conio.h>


int main()
{
     float ub,lb,h,Area;

     printf("\n Enter Upper Base : ");
     scanf("%f",&ub);

     printf("\n Enter Lower Base : ");
     scanf("%f",&lb);

     printf("\n Enter Height : ");
     scanf("%f",&h);

     Area = ((ub+lb)/2)*h;

     printf("\n-------------------------------------------------\n");
     printf("\n Area Of Trapezoid = %.2f\n",Area);
     printf("\n-------------------------------------------------\n");

     getch();
     return 0;

}
