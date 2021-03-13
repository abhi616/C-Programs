#include <stdio.h>
#include<conio.h>
#define Cnt 5

//Compiler version gcc  6.3.0

int Find_Even_Count(int *P)
{
  int j=0,E_Cnt=0;
  
  for(j=0;j<Cnt;j++) 
   {
       if(P[j]==0)
        {
          continue;
        }
     
       if(P[j]%2==0) 
        {
          E_Cnt++;
        }         
        
    }
    
   return E_Cnt;
}

int Find_Zero_Count(int *P)
{
  int j=0,Z_Cnt=0;
  
  for(j=0;j<Cnt;j++)
   {
     if(P[j]==0)
       {
          Z_Cnt++;           
       }  
   }
  
  return Z_Cnt;
}

int Find_Odd_Count(int *P)
{
  int j=0,O_Cnt=0;
  
  for(j=0;j<Cnt;j++)
   {
     
     if(P[j]%2!=0)
       {
          O_Cnt++;           
       }  
   }
  
  return O_Cnt;
  
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
     printf("\nTotal Count Of Even Numbers From Given Array = %d\n",Find_Even_Count(Arr));
     printf("\nTotal Count Of Odd Numbers From Given Array = %d\n",Find_Odd_Count(Arr));
  
  return 0;
}