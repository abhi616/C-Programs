#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{
  char Ch;
  int C,i,j;
  
  printf("Enter Rows & Columns Count : ");
  scanf("%d",&C);
  
  for(i=0;i<C;i++)
  {
    for(j=0,Ch='A';j<C;j++,Ch++)
    {
      if((i>=j)&&(i+j<C))
      {
        printf("%c ",Ch);
      }
    }
    
    printf("\n");
  }
  
  getch();
  return 0;
}