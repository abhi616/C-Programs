#include<stdio.h>
#include<conio.h>

int main()
{
    float Rad,h = 0,V;
    const float Pi = 3.14;


    printf("\n Enter Radius : ");
    scanf("%f",&Rad);

    printf("\n Enter Height : ");
    scanf("%f",&h);

    V = (Pi*Rad*Rad*h)/3;

    printf("\n--------------------------------------------------\n");
    printf("\n Volume Of Cone = %.2f\n",V);
    printf("\n--------------------------------------------------\n");


    getch();
    return 0;
}
