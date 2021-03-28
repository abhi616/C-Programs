/*
    Input: iNo1=83 iNo2=71
    Output:20
    
    Explanation:
         Binary Of 83 = 0 1 0 1 0 0 1 1
         Binary Of 71 = 0 1 0 0 0 1 1 1
                       _________________
         Bitwise ^    = 0 0 0 1 0 1 0 0     //This Values Are Taken From Bitwise X-OR(^) Table 
 
 
         Now,Find Decimal Number:
             = 0 0 0 1 0 1 0 0
             =[(2^7)*0]+[(2^6)*0]+[(2^5)*0]+[(2^4)*1]+[(2^3)*0]+[(2^2)*1]+[(2^1)*0]+[(2^0)*0]     
             =(128*0)+(64*0)+(32*0)+(16*1)+(8*0)+(4*1)+(2*0)+(1*0)
             =0+0+0+16+0+4+0+0
             =20
          
        Final Output = 20   
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int iNo1=0,iNo2=0,Res=0;
  printf("Enter 2 Numbers: ");
  scanf("%d%d",&iNo1,&iNo2);
  
  Res=iNo1^iNo2;
  
  printf("\nOutput Of Bitwise X-OR Of %d & %d  = %d\n",iNo1,iNo2,Res);
  
  return 0;
}