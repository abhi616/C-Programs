#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{  
    int n,fact=1,temp;

    printf("Enter Number To Find Their Factorial:");
    scanf("%d",&n); 

    temp=n;

    if(temp>0)
    {
      for(;temp>0;temp--)
      {
         fact=temp*fact; 
      }
    }
    else
    {
     for(;temp<0;temp++)
      {
        fact=temp*fact;      
      }
    }

  printf("\nFactorial Of Entered Number %d Is %d",n,fact);
  
  getch();
  return 0;
 }
  
