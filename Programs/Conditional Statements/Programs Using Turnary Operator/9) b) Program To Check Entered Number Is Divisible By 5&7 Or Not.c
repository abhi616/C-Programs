#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0
int main()
{  
  int no;
    printf("Enter Number To Check It Is Divisible By 5&7 Or Not:");
    scanf("%d",&no);    
   ((no%5==0 && no%7==0)?printf("Entered Number %d Is Divisible By Both 5&7",no):(no%5==0)?printf(" Entered Number %d Is Only Divisible By 5",no):(no%7==0)?printf("Entered  Number %d Is Only Divisible By 7",no):printf("Entered Number %d Is Not Divisible By Both 5&7",no));
  return 0;
 }
  