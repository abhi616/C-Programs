#include<stdio.h>
#include<conio.h>

int main()
{
    float Rad,SA=0;
    const float Pi = 3.14;

    printf("\n Enter Radius : ");
    scanf("%f",&Rad);

    SA = (4*Pi*Rad*Rad);

    printf("\n--------------------------------------------------\n");
    printf("\n Surface Area Of Sphere = %.2f\n",SA);
    printf("\n--------------------------------------------------\n");


    getch();
    return 0;
}

