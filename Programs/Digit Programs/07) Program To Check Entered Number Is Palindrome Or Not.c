#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{  
    int n,rev=0,temp,dig=0;

    printf("Enter Number To Check It Is Palindrome Or Not:");
    scanf("%d",&n); 

    temp=n;  

   for(;temp>0;temp=temp/10)
    {
       dig=temp%10;
       rev=rev*10+dig;
    }

    if(rev==n)
     {
       printf("\n %d Is Palindrome...",n);
     }
    else
     {
       printf("\n %d Is Not Palindrome...",n);
     }

  getch();
  return 0;
 }
  
