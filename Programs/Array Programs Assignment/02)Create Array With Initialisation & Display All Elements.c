#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int Arr[5]={45,76,53,88,95},i;
  
  for(i=0;i<5;i++)
   {
     printf("%d Element = %d\n",i+1,Arr[i]);     
   }
  
  return 0;
}