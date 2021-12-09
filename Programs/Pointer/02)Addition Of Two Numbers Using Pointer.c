#include<stdio.h>
#include<conio.h>

int Find_Sum(int*,int*);


int main()
{
     int N1 , N2 , Res = 0;

      printf("\n Enter Two Number : ");
      scanf("%d%d",&N1,&N2);

     Res = Find_Sum(&N1,&N2);

     printf("\n\n Addition Of %d & %d = %d",N1,N2,Res);

     getch();
     return 0;
}


int Find_Sum(int *No1 , int *No2)
{

   int Sum;

   Sum = *No1 + *No2;

   return Sum;
}
