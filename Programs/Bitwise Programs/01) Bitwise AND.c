/*
    Input: 17 26
    Output:16
    
    Explanation:
         Binary Of 17 = 0 1 0 0 0 1
         Binary Of 26 = 0 1 1 0 1 0
                       _____________

         Bitwise &    = 0 1 0 0 0 0      //This Values Are Taken From Table Of Bitwise AND(&)
         
         Now, Find Decimal Number:       
            = 0 1 0 0 0 0
            =[(2^5)*0]+[(2^4)*1]+[(2^3)*0]+[(2^2)*0]+[(2^1)*0]+[(2^0)*0]
            =(32*0)+(16*1)+(8*0)+(4*0)+(2*0)+(1*0)
            = 0+16+0+0+0+0 
            =16
            
        Final Output = 16 
*/


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{
  int No1=0,No2=0,Res=0;
  
  Up:
  printf("Enter 2 Numbers: ");
  scanf("%d%d",&No1,&No2);
  
  if(No1<0||No2<0)
  {
    printf("\nPlease Enter Valid Numbers...!\n\n");
    goto Up;
  }
  
  
  Res=No1&No2;
  
  printf("\nOutput Of Bitwise And Of %d & %d = %d\n",No1,No2,Res);
  
  getch();
  
  return 0;
}