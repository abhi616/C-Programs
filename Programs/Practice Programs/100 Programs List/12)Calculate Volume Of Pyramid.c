#include<stdio.h>
#include<conio.h>

int main()
{
    float l,w,h,V = 0;

    printf("\n Enter Base Length : ");
    scanf("%f",&l);

    printf("\n Enter Base Width : ");
    scanf("%f",&w);

    printf("\n Enter Pyramid Height : ");
    scanf("%f",&h);

    V = (l*w*h)/3;

    printf("\n--------------------------------------------------\n");
    printf("\n Volume Of Pyramid = %.2f\n",V);
    printf("\n--------------------------------------------------\n");


    getch();
    return 0;
}
