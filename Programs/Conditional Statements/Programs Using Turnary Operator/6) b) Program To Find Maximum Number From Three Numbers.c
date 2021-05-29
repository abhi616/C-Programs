#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{  
  int N1,N2,N3; 

   up: 
    printf("Enter Three Numbers To Check Which Number Is Maximum:");
    scanf("%d%d%d",&N1,&N2,&N3);

    if(N1==N2&&N1==N3)
      {
         printf("\nNumbers Are Equal...\n\n");
         goto up;
      }

   ((N1>N2)?(N1>N3)?printf("%d Is Maximum",N1):printf("%d Is Maximum",N3):(N2>N3)?printf("%d Is Maximum",N2):printf("%d Is Maximum",N3));
  
  getch();
  return 0;
 }
  
