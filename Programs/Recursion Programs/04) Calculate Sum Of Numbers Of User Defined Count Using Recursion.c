#include <stdio.h>

//Compiler version gcc  6.3.0

int Find_Sum(int iCnt)
{
   static int iSum=0;
   int iNum=0;
    
   if(iCnt>0)
    {
       printf("\nEnter Number: ");
       scanf("%d",&iNum);
       
       iSum=Find_Sum(iCnt-1)+iNum;       
    }
   
   return iSum;
  
}

int main()
{
  int iValue1=0,iAns=0;
  
   printf("Enter Count: ");
   scanf("%d",&iValue1);
   
   printf("\n******************\n");
   
   iAns=Find_Sum(iValue1);
   
   printf("\n******************\n");
   
   printf("\nSum = %d \n",iAns); 
   
  return 0;
}