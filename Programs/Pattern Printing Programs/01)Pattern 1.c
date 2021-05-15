/*
    Input :   R=4 C=4
    Output:  
            * * * *
            * * * *
            * * * *
            * * * *   
*/


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{
  int R,C,i,j;
  
  printf("Enter Row & Column Count : ");
  scanf("%d%d",&R,&C);
  
  for(i=0;i<R;i++)
  {
    for(j=0;j<C;j++)
    {
      printf("* ");
    }
    
    printf("\n");
  }
  
  getch();
  return 0;
}