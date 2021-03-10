#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int Arr[7]={0},i=0;
  
    //Accept Array Elements Using Loop
     
     for(i=0;i<7;i++)
      {
        printf("\n•Enter %d Element: ",i+1);
        scanf("%d",&Arr[i]);
     
      }
     
     
     printf("\n\n*************************\n");
     
     //Display Array Elements Using Loop
     
     for(i=0;i<7;i++)
      {
        printf("\n%d Element = %d\n",i+1,Arr[i]);
      }
     
      
     printf("\n\n*************************\n");    
  
  return 0;
}