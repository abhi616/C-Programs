#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{  
    int n,sum=0,temp,dig=0;

    up:
    printf("Enter 3 Digit Number To Find Their Sum:");
    scanf("%d",&n); 

   temp=n; 

   if(temp>=100 && temp<=999) 
    {
     for(;temp>0;temp=temp/10)
      {
         dig=temp%10;
         sum=sum+dig;
      }
    }
   else
    {
      printf("\nEnter Valid 3 Digit Number....\n\n");
      goto up; 
    }

   printf("\nSum Of Entered Number %d Is %d",n,sum);
  
  getch();
  return 0;
 }
  
