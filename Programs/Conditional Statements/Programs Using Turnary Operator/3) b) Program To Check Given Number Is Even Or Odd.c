#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{  
    int No;  

    printf("Enter Number To Check Number Is Even Or Odd:");
    scanf("%d",&No);

    (No%2==0?printf("%d Is Even Number",No):printf("%d Is Odd Number",No));  

    getch();            
    return 0;
 }
  
