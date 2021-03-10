#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0
int main()
{  
  int n1,n2,n3; 
   up: 
    printf("Enter Three Numbers To Check Which Number Is Maximum:");
    scanf("%d%d%d",&n1,&n2,&n3);
     if(n1==n2&&n1==n3)
       {
         printf("\nNumbers Are Equal...\n\n");
         goto up;
       }
  ((n1>n2)?(n1>n3)?printf("%d Is Maximum",n1):printf("%d Is Maximum",n3):(n2>n3)?printf("%d Is Maximum",n2):printf("%d Is Maximum",n3));
  
  return 0;
 }
  