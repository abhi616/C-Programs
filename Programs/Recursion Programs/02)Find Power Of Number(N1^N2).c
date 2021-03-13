#include <stdio.h>

//Compiler version gcc  6.3.0

int Find_Power(int iNo1,int iNo2)
{
   static int iPow=1;
   
   if(iNo2>=2)
    {
      
       iPow=Find_Power(iNo1,iNo2-1);
       
    }
   
   return iPow*iNo1;
  
}

int main()
{
  int iValue1=0,iValue2=0,iAns=0;
  
   printf("Enter 2 Numbers: ");
   scanf("%d%d",&iValue1,&iValue2);
   
   iAns=Find_Power(iValue1,iValue2);
   
   printf("\nPower (%d^%d)=%d\n",iValue1,iValue2,iAns);
   
  return 0;
}