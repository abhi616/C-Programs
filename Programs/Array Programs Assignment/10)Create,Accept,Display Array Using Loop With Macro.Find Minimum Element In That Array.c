#include <stdio.h>
#include<conio.h>
#define Cnt 5

//Compiler version gcc  6.3.0

int Find_Minimum(int *P)
{
  int j=0,Min=0;
  
  for(j=0;j<Cnt;j++) 
      {
        if(j==0)
         {
           Min=P[j];
         }
         
         if(P[j]<Min)
          {
            Min=P[j];
          }
        
      }
      
   return Min;
}

int main()
{
  int Arr[Cnt]={0},i=0,Res=0;
  
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
     
     
    Res=Find_Minimum(Arr);
     
     printf("\nMinimum Number From Given Array = %d\n",Res);
      
  return 0;
}