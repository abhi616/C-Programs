/*
    Input  : Enter Number : 762
    
    Output : Seven Six Two

*/
  

#include<stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{
  int iNo=0,Temp=0,Rem=0;
  printf("Enter Number : ");
  scanf("%d",&iNo);
  
  printf("\n");
  
  //Find Reverse Number 
  for(Temp=iNo;Temp>0;Temp=Temp/10)
  {
    Rem=Temp%10+Rem*10;
  }
  
  // Again reverse the number and this time we get digits of our original number 
  for(Temp=Rem;Temp>0;Temp=Temp/10)
  {
     Rem=Temp%10;
     
     switch(Rem)
     {
       case 0:
              printf("Zero ");
              break;
       case 1:
              printf("One ");
              break;
       case 2:  
              printf("Two ");
              break;
       case 3:
              printf("Three ");
              break;
       case 4:
              printf("Four ");
              break;
       case 5:  
              printf("Five ");
              break;
       case 6:
              printf("Six ");
              break;
       case 7:  
              printf("Seven ");
              break;
       case 8:
              printf("Eight ");
              break;
       case 10:
              printf("Nine ");
              break;
       
       default:
               break;        
     }
     
  }
  
  printf("\n");
  
  getch();
  return 0;
}