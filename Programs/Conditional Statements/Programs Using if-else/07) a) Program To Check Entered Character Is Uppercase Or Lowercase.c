#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{  
  char ch;

    printf("Enter Character To Check Character Is Lowercase Or Uppercase:");
    ch=getchar();   
 
     if(ch>=65&&ch<=90)
      {
        printf("\n%c Is Uppercase",ch);
      }
    else
      {
        printf("\n%c Is Lowercase",ch);
      }

  getch();
  return 0;
 }
  
