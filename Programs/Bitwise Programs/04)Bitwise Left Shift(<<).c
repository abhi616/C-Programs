/*
     Input  : 83
     Output : 332
     
     Explanation :
       
       Binary Number Of 83 = 01010011
       
       83<<2 ,This line adds 2 zeros(00) on the left hand side of that binary number of 83
     
       Then,
          83<<2 = 0 1 0 1 0 0 1 1 0 0
                = [(2^9)*0]+[(2^8)*1]+[(2^7)*0+[(2^6)*1]]+[(2^5)*0]+[(2^4)*0]+[(2^3)*1]+[(2^2)*1]+[(2^1)*0]+[(2^0)*0]
                = (512*0)+(256*1)+(128*0)+(64*1)+(32*0)+(16*0)+(8*1)+(4*1)+(2*0)+(1*0)
                = 0+256+0+64+0+0+8+4+0+0
                = 332
        
   Final Output = 332                    
            
*/


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{
  int iNo=0,Res=0;
  
  printf("Enter Number: ");
  scanf("%d",&iNo);
  
  Res=iNo<<2;
  
  printf("\nOutput Of Bitwise Left Shift is : \n\n \t%d<<2 = %d\n",iNo,Res);
  
  getch();
  return 0;
}