#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{  
    char ch;

    printf("Enter Character To Check Character Is Lowercase/Uppercase/Digit/Special Symbol:");
    ch=getchar();  
  
     if(ch>=65&&ch<=90)
       {
         printf("Entered Character '%c' Is Uppercase Character",ch);
       }
     else if(ch>=97&&ch<=122)
       {
         printf(" Entered Character '%c' Is Lowercase Character",ch);
       }
    else if(ch>=48&&ch<=57)
      {
        printf("Entered Character '%c' Is Digit",ch);
      }
    else
     {
        printf("Entered Character '%c' Is Special Symbol",ch);
     }

  getch();
  return 0;
 }
  
