#include<stdio.h>
#include<conio.h>

int main()
{ 
    int n1,n2;  

    printf("Enter 2 Numbers:"); 
    scanf("%d%d",&n1,&n2); 

    printf("\nFactors Of %d Is==>\n",n1);

    for(int i=1;i<=n1;i++)
     {
       if(n1%i==0)
         {
          printf("\t\t%d \n",i);
         }     
     }

    printf("\nFactors Of %d Is==>\n",n2);

    for(int i=1;i<=n2;i++)
     {
       if(n2%i==0)
         {
          printf("\t\t%d \n",i);
         }     
     }
   
  getch(); 
  return 0;
}

    
