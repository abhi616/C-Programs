#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{  
    int a,b;  

    printf("Enter 2 Numbers To Find Max Number Between Them : ");
    scanf("%d%d",&a,&b);

     if(a>b)
      {
       printf("%d is maximum",a);
      }
     else
      printf("%d is maximum",b);

   getch();
   return 0;
 }
  
