#include<stdio.h>
#include<conio.h>
  int add(int,int);
  int sub(int,int);
  int mult(int,int);    
  int div(int,int);
  int mod(int,int);

int main()
{
   int n1,n2,choice;
     printf("******Choices******\n1)Addition\n2)Substraction\n3)Multiplication\n4)Division\n5)Modulo\n6)Exit\n***************************\n");
     up:
    printf("Enter Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
             printf("\nEnter 2 Numbers:");  
             scanf("%d%d",&n1,&n2);
             printf("\nAddition=%d",add(n1,n2));
             break;
      case 2:
             printf("\nEnter 2 Numbers:");
             scanf("%d%d",&n1,&n2);
             printf("\nSubstraction=%d",sub(n1,n2));
             break;
      case 3:
            printf("\nEnter 2 Numbers:");   
            scanf("%d%d",&n1,&n2);
            printf("\nMultiplication=%d",mult(n1,n2));
            break;
     case 4:
           printf("\nEnter 2 Numbers:");
           scanf("%d%d",&n1,&n2);
           printf("\nDivision=%d",div(n1,n2));
           break;
    case 5:  
          printf("\nEnter 2 Numbers:");  
          scanf("%d%d",&n1,&n2);
          printf("\nModulo=%d",mod(n1,n2));
          break;
   default:
           printf("\nPlease Enter Valid Choice....\n");
           goto up;
   }
   return 0;
}
 int add(int a,int b)
  {
   return(a+b);
  }

 int sub(int a,int b)
  {    
      return(a-b);
  }

  int mult(int a,int b)
   {
     return(a*b);
   }

  int div(int a,int b)
   {
     return(a/b);
   }
 
  int mod(int a,int b)
   {
     return(a%b);
   }