#include<stdio.h>
#include<conio.h>

int main()
{
    float a,b,c,V=0;
    const float Pi = 3.14;

    printf("\n Enter 3 Axis Values : ");
    scanf("%f%f%f",&a,&b,&c);

    V = (4*Pi*a*b*c)/3;

    printf("\n--------------------------------------------------\n");
    printf("\n Volume Of Ellipsoid = %.2f\n",V);
    printf("\n--------------------------------------------------\n");


    getch();
    return 0;
}
