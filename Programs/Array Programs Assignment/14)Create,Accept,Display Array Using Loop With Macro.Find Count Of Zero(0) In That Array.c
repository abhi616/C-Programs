#include <stdio.h>
#include<conio.h>
#define Cnt 5

//Compiler version gcc  6.3.0

int Find_Zero_Count(int *P)
{
  int j=0,Zero_Cnt=0;
  
  for(j=0;j<Cnt;j++) 
      {
        if(P[j]==0)
         {
           Zero_Cnt++;
         }       
    
      }
      
   return Zero_Cnt;
}

int main()
{
  int Arr[Cnt]={0},i=0;
  
    //Accept Array Elements Using Loop
     
     for(i=0;i<Cnt;i++)
      {
        printf("\n•Enter %d Element: ",i+1);
        scanf("%d",&Arr[i]);
     
      }
     
     
     printf("\n\n*************************\n");
     
     //Display Array Elements Using Loop
     
     for(i=0;i<Cnt;i++)
      {
        printf("\n%d Element = %d\n",i+1,Arr[i]);
      }
     
      
     printf("\n\n*************************\n");
     
     
     
     printf("\nTotal Count Of Zero(0) From Given Array = %d\n",Find_Zero_Count(Arr));
    
  return 0;
}