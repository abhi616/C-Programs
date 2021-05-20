#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0
int main()
{  
    int a,b;  

    printf("Enter 2 Numbers To Find Max Number Between Them:");
    scanf("%d%d",&a,&b);

    (a>b?printf("\n%d is max",a):printf("\n%d is max",b));
  
   getch();
   return 0;
 }
  
