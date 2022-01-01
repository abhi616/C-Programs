#include<stdio.h>
#include<conio.h>

int main()
{
    float a,SA=0;

    printf("\n Enter Edge : ");
    scanf("%f",&a);

    SA = (6*a*a);

    printf("\n--------------------------------------------------\n");
    printf("\n Surface Area Of Cube = %.2f\n",SA);
    printf("\n--------------------------------------------------\n");


    getch();
    return 0;
}
