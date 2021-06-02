#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{  
   int n,rev=0,temp,dig=0;
    
    up:
    printf("Enter 4 Digit Number To Find Their Right To Left Order(Reverse Number):");
    scanf("%d",&n); 

   temp=n; 

  if(temp>=1000&& temp<=9999) 
   {
     for(;temp>0;temp=temp/10)
      {
         dig=temp%10;
         rev=rev*10+dig;
      }
   }
  else
   {
      printf("\nEnter Valid 4 Digit Number....\n\n");
      goto up; 
   }

   printf("\nEntered Number %d Right To Left Order Is %d",n,rev);
  
  getch();
  return 0;
 }
  
