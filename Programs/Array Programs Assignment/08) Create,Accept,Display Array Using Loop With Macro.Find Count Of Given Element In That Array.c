#include <stdio.h>
#include<conio.h>
#define Cnt 5

//Compiler version gcc  6.3.0

int Calculate_Count(int S,int *P)
{
  int j=0,C=0;
  
  for(j=0;j<Cnt;j++) 
      {
        if(P[j]==S)
         {
           C++;
         }
        
      }
   return C;
}

int main()
{
  int Arr[Cnt]={0},i=0,No=0,Res=0;
  
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
     
     up:
     printf("\nEnter Element For Finding Count Of That Element: ");
     scanf("%d",&No); 
     
    Res=Calculate_Count(No,&Arr);
     
     if(Res!=0)
      {
         printf("\nEntered Element %d Total Count = %d.",No,Res);  
      }
     else
      {
        clrscr();
        printf("\nDoesn't Contain %d In Array.",No);
        printf("\n\nPlease nEnter Valid Number!!!\n");
        goto up;
      }
      
  return 0;
}