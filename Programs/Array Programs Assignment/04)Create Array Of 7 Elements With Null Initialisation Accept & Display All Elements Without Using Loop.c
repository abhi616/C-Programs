#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int Arr[7]={0},i=0;
  
    //Accept Array Elements Without Using Loop
     printf("Enter 1st Element: ");
     scanf("%d",&Arr[0]);
     printf("\nEnter 2nd Element: ");
     scanf("%d",&Arr[1]);
     printf("\nEnter 3rd Element: ");
     scanf("%d",&Arr[2]);
     printf("\nEnter 4th Element: ");
     scanf("%d",&Arr[3]);
     printf("\nEnter 5th Element: ");
     scanf("%d",&Arr[4]);
     printf("\nEnter 6th Element: ");
     scanf("%d",&Arr[5]);
     printf("\nEnter 7th Element: ");
     scanf("%d",&Arr[6]);
     
     printf("\n\n*************************\n");
     
     //Display Array Elements Without Using Loop
     
     printf("\n%d Element = %d\n",++i,Arr[0]);
     printf("\n%d Element = %d\n",++i,Arr[1]);
     printf("\n%d Element = %d\n",++i,Arr[2]);
     printf("\n%d Element = %d\n",++i,Arr[3]);
     printf("\n%d Element = %d\n",++i,Arr[4]);
     printf("\n%d Element = %d\n",++i,Arr[5]);
     printf("\n%d Element = %d\n",++i,Arr[6]);
      
     printf("\n\n*************************\n");    
  
  return 0;
}