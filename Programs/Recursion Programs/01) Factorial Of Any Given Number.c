#include <stdio.h>

//Compiler version gcc  6.3.0

int Find_Factorial(int iNo)
{
   static int iFact=1;
   
   if(iNo>=2)
    {
      
       iFact=Find_Factorial(iNo-1);
       
    }
   
   return iFact*iNo;
  
}

int main()
{
  int iValue=0,iAns=0;
  
   printf("Enter Number: ");
   scanf("%d",&iValue);
   
   iAns=Find_Factorial(iValue);
   
   printf("\nFactorial=%d",iAns);
   
  return 0;
}