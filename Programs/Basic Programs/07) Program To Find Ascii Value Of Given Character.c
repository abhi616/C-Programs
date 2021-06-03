#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{  
    char ch; 
 
    printf("Enter Character To Find Their Corresponding Ascii Value:");
    scanf("%c",&ch);

    clrscr();

    printf("\nAscii Value Of Given Character .%c. Is %d",ch,ch);
   
    getch();
    return 0;
 }
  
