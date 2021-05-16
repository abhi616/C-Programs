/*
   Input  : R=5  C=5
   Output :
           A
           A B
           A B C
           A B C D
           A B C D E 
*/


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{
  int R,C,i,j;
  char Ch;
  
  printf("Enter Row & Column Count : ");
  scanf("%d%d",&R,&C);
  
  for(i=1;i<=R;i++)
  {
    for(j=1,Ch='A';j<=C;j++,Ch++)
    {
       if(i>=j)
       {
         printf("%c ",Ch);
       }
    }
    
    printf("\n");
  }
  
  getch();
  return 0;
}