/*
     Input  : 83
     Output : 20
     
     Explanation :
       
       Binary Number Of 83 = 01010011
       
       83>>2 ,This line adds 2 zeros(00) at the beginning of the binary number of 83 & skip last 2 digits
     
       Then,
          83>>2 = 0 0 0 1 0 1 0 0 
                = [(2^7)*0+[(2^6)*0]]+[(2^5)*0]+[(2^4)*1]+[(2^3)*0]+[(2^2)*1]+[(2^1)*0]+[(2^0)*0]
                = (128*0)+(64*0)+(32*0)+(16*1)+(8*0)+(4*1)+(2*0)+(1*0)
                = 0+0+0+16+0+4+0+0
                = 20
        
   Final Output = 20                    
            
*/


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{
  int iNo=0,Res=0;
  
  printf("Enter Number: ");
  scanf("%d",&iNo);
  
  Res=iNo>>2;
  
  printf("\nOutput Of Bitwise Right Shift is : \n\n \t%d>>2 = %d\n",iNo,Res);
  
  getch();
  return 0;
}