#include <stdio.h>
#include<conio.h>
#define Cnt 5

//Compiler version gcc  6.3.0

int Find_FirstMaximum_SecondMaximum(int *P,int *Max,int *S_Max)
{
  int j=0;
  
  for(j=0;j<Cnt;j++) 
      {
        if(j==0)
         {
           *Max=P[j];
         }
         
         if(P[j]>*Max)
          {
            *S_Max=*Max;
            *Max=P[j];            
          }
         
        
      }
      
   return;
}

int main()
{
  int Arr[Cnt]={0},i=0,Maxi=0,S_Maxi=0;
  
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
     
     
    Find_FirstMaximum_SecondMaximum(Arr,&Maxi,&S_Maxi);
     
     printf("\n1st Maximum Number From Given Array = %d\n",Maxi);
     printf("\n2nd Maximum Number From Given Array = %d\n",S_Maxi);
  return 0;
}