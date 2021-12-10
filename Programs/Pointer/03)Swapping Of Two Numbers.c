#include<stdio.h>
#include<conio.h>

void Swap(int*,int*);

int main()
{
    int N1 , N2;

    printf("\n Enter Two Numbers : ");
    scanf("%d%d",&N1,&N2);

    printf("\n----------------------------------------------------\n");

    printf("\n Before Swapping N1 = %d & N2 = %d\n",N1,N2);

    Swap(&N1,&N2);

    printf("\n After Swapping N1 = %d & N2 = %d\n",N1,N2);

    printf("\n----------------------------------------------------\n");

    getch();
    return 0;
}


void Swap(int *P1,int *P2)
{
    int *Temp = *P1;
    *P1 = *P2;
    *P2 =  Temp;

    return;
}
