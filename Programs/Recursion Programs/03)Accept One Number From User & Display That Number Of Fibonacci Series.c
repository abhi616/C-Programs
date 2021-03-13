#include <stdio.h>

//Compiler version gcc  6.3.0

int Display_Fibonacci_Series(int iCnt)
{
   static int iFib=0,iFirst=0,iSecond=1;
    
   if(iCnt>0)
    {
       iFib=Display_Fibonacci_Series(iCnt-1)+iFirst;       
       printf(" %d ",iFib);
       iFirst=iSecond;
       iSecond=iFib;
       
    }
   
   return iFib;
  
}

int main()
{
  int iValue1=0;
  
   printf("Enter Number: ");
   scanf("%d",&iValue1);
   
   printf("\nFibonacci Series: \n");
   
   Display_Fibonacci_Series(iValue1);
      
   
  return 0;
}