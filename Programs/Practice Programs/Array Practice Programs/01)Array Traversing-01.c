#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{
  int Arr[6]={10,20,30,40,50,60},i=0;
   
   
  printf("Hello,Press Any Key To See Result...!\n\n");
  getch();
  
  printf("\nArray Elements Are==>\n");
  
  
  printf("\n_________________________\n");
  
  for(i=0;i<6;i++)
  {   
    printf("|%-3d",Arr[i]);
    getch();
  }
  
  printf("|\n-------------------------\n");
  
  getch();
  return 0;
}