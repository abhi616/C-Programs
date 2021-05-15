/*
      Input  : R=5  C=5
      Output :
               *       *    
                 *   *    
                   *   
                 *   *
               *       *
*/     


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{
  int R,C,i,j;
  
  printf("Enter Row & Column Count : ");
  scanf("%d%d",&R,&C);  
  
  for(i=1;i<=R;i++)
  {
     for(j=1;j<=C;j++)
     {
       
       if(i==j||j==C-i+1)
       {
         printf("* ");
       }
      else
      {
        printf("  ");
      }
      
     }
     
     printf("\n");
  }
  
  
  getch();
  return 0;
}