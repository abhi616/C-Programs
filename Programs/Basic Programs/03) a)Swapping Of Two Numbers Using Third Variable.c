#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0
int main()
{ 
  int no1,no2,temp; 
   printf("Enter Two Numbers For Swapping:");
   scanf("%d%d",&no1,&no2);
   clrscr();
  printf("Before Swapping No1=%d & No2=%d",no1,no2);
     temp=no1;
      no1=no2;
      no2=temp;
  printf("\n\nAfter Swapping No1=%d & No2=%d\n",no1,no2);

  return 0;
 }
  