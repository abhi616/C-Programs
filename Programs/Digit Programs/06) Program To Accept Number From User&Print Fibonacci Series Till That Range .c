#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{  
  int n,f=0,s=1,fib;

    printf("Enter Number To Print Fibonacci Series Till That Range:");
    scanf("%d",&n);
 
     for(int i=0;i<=n;i++)
      {
         fib=f;
         printf("%d ",fib);
           f=s; 
           s=fib+f;         
      }

  getch();
  return 0;
 }
  
