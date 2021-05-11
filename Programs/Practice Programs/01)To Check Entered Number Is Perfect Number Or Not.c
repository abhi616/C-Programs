#include<stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int Is_Perfect_Number(int No)
{
   int i=0,F_Sum=0;          // F_Sum For Storing Sum Of Factors & i For Find Factors
   
   for(i=1;i<=No/2;i++)
   {
     
      if(No%i==0)           // Finding Sum Of Factors Of Entered Number 
      {
        F_Sum=i+F_Sum;         
      }
      
   }
   
  
  if(F_Sum==No) 
  {
    return 1;
  }
  else
  {
    return 0;
  }
  
  
}


int main()
{
  int iNo=0,iRet=0;
  
  printf("Enter Number: ");
  scanf("%d",&iNo);
  
  iRet=Is_Perfect_Number(iNo);
  
  if(iRet==1)
  {
    printf("\n%d is Perfect Number.",iNo);
  }
  else
  {
    printf("\n%d is Not Perfect Number.",iNo);
  }
  
  getch();
  return 0;
}