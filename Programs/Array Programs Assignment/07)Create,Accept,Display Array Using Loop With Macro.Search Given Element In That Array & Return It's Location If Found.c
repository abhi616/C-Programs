#include <stdio.h>
#define Cnt 5

//Compiler version gcc  6.3.0

int Search_Element(int S,int *P)
{
  int j=0;
  
  for(j=0;j<Cnt;j++) 
      {
        if(P[j]==S)
         {
           return j;
         }
        
      }
   return 0;
}

int main()
{
  int Arr[Cnt]={0},i=0,Ser=0,Res=0;
  
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
     
     printf("\nEnter Element For Searching: ");
     scanf("%d",&Ser); 
     
    Res=Search_Element(Ser,&Arr);
     
     if(Res!=0)
      {
         printf("\nEntered Element %d Are Found At Location \'%d\'.",Ser,Res+1);  
      }
     else
      {
        printf("\nDoesn't Contain %d In Array.",Ser);
      }
      
  return 0;
}