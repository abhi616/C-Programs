#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0
int main()
{  
  char ch;
    printf("Enter Character Between[(A-D)/(a-d)]:");
    scanf("%c",&ch); 
     switch(ch)
     {
       case 'A':
       case 'a': 
               printf("Welcome....");
               break;
       case 'B':
       case 'b':
               printf("Good Bye...");
               break;
       case 'C':
       case 'c':
               printf("Have a nice day...");
               break;
      case 'D':
      case 'd':
              printf("Good Day...");
              break;
     default:
              printf("Thanks...");
    }
  return 0;
 }
  