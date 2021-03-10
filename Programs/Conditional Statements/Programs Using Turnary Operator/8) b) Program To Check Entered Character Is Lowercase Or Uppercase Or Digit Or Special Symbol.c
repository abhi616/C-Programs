#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0
int main()
{  
  char ch;
    printf("Enter Character To Check Character Is Lowercase/Uppercase/Digit/Special Symbol:");
    ch=getchar();    
     ((ch>=65&&ch<=90)?printf("\nEntered Character '%c' Is Uppercase Character",ch):(ch>=97&&ch<=122)?printf("\nEntered Character '%c' Is Lowercase Character",ch):(ch>=48&&ch<=57)?printf("\nEntered Character '%c' Is Digit",ch):printf("\nEntered Character '%c' Is Special Symbol",ch));      
  return 0;
 }
  