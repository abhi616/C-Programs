#include <stdio.h>
#include<conio.h>
#define Cnt 5

//Compiler version gcc  6.3.0

int Find_Minimum_Maximum(int *P,int *Max,int *Min)
{
  int j=0;
  
  for(j=0;j<Cnt;j++) 
      {
        if(j==0)
         {
           *Min=P[j];
           *Max=P[j];
         }
         
         if(P[j]>*Max)
          {
            *Max=P[j];
          }
          
         if(P[j]<*Min)
          {
            *Min=P[j];
          }
        
      }
      
   return;
}

int main()
{
  int Arr[Cnt]={0},i=0,Min=0,Max=0;
  
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
     
     
    Find_Minimum_Maximum(Arr,&Max,&Min);
     
     printf("\nMinimum Number From Given Array = %d\n",Min);
     printf("\nMaximum Number From Given Array = %d\n",Max); 
  return 0;
}