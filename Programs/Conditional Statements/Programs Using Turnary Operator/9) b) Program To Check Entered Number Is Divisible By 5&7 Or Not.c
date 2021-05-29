#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{  
    int No;

    printf("Enter Number To Check It Is Divisible By 5&7 Or Not:");
    scanf("%d",&No);  
  
   ((No%5==0 && No%7==0)?printf("Entered Number %d Is Divisible By Both 5&7",No):(No%5==0)?printf(" Entered Number %d Is Only Divisible By 5",No):(No%7==0)?printf("Entered  Number %d Is Only Divisible By 7",No):printf("Entered Number %d Is Not Divisible By Both 5&7",No));
 
   getch();
   return 0;
 }
  
