#include<stdio.h>
#include<conio.h>

int main()
{
    float Rad,V=0;
    const float Pi = 3.14;

    printf("\n Enter Radius : ");
    scanf("%f",&Rad);

    V = (4*Pi*Rad*Rad*Rad)/3;

    printf("\n--------------------------------------------------\n");
    printf("\n Volume Of Sphere = %.2f\n",V);
    printf("\n--------------------------------------------------\n");


    getch();
    return 0;
}
