#include<stdio.h>
#include<conio.h>

int main()
{
    float a,b,Area=0;
    const float Pi = 3.14;

    printf("\n Enter 2 Axis Values : ");
    scanf("%f%f",&a,&b);

    Area = Pi*a*b;

    printf("\n--------------------------------------------------\n");
    printf("\n Area Of Ellipse = %.2f\n",Area);
    printf("\n--------------------------------------------------\n");


    getch();
    return 0;
}
