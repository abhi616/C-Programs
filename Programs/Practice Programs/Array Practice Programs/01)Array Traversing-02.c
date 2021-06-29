#include<stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{
  int Arr[6]={},i=0;
  printf("\n***********************************************\n");
  
  for(i=0;i<6;i++) 
  {
    printf("\nEnter %d Element : ",i+1);
    scanf("%d",&Arr[i]);
  }
  
  printf("\n***********************************************\n");
  
  printf("\nHello,Press Any Key To See Entered Elements...!\n\n");
  getch();
  
  printf("\nArray Elements Are==>\n");
  
  
  printf("\n_________________________\n");
  
  for(i=0;i<6;i++)
  {   
    printf("|%-3d",Arr[i]);
    getch();
  }
  
  printf("|\n-------------------------\n");
  
  printf("\n***********************************************\n");
 
  getch();
  return 0;
}