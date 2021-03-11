#include <stdio.h>
#include<conio.h>
#define Cnt 5

//Compiler version gcc  6.3.0

int Find_Maximum(int *P)
{
  int j=0,Max=0;
  
  for(j=0;j<Cnt;j++) 
      {
        if(j==0)
         {
           Max=P[j];
         }
         
         if(P[j]>Max)
          {
            Max=P[j];
          }
        
      }
      
   return Max;
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
     
     
    Res=Find_Maximum(Arr);
     
     printf("\nMaximum Number From Given Array = %d\n",Res);
      
  return 0;
}