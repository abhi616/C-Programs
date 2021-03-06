#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0
int main()
{  
  int n,max=0,temp,dig=0;
     up:
    printf("Enter 3 Digit Number To Find Maximum Digit From It:");
    scanf("%d",&n); 
     temp=n; 
   if(temp>=100 && temp<=999) 
     {
     for(;temp>0;temp=temp/10)
      {
         dig=temp%10;
          if(dig>max)
            {
              max=dig;
            }       
      }
   }
   else
     {
      printf("\nEnter Valid 3 Digit Number....\n\n");
      goto up; 
     }
     printf("\nMaximum Digit From The Entered Number %d Is %d",n,max);
  return 0;
 }
  