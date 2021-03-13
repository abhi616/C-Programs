#include <stdio.h>

#define Size 10

//Compiler version gcc  6.3.0


void Accept_Array_Elements(int *iPtr)
{
  int i=0;
  
  for(i=0;i<Size;i++)
   {
      printf("\nEnter %d Element: ",i+1);
      scanf("%d",&iPtr[i]);     
   }
  
   return;
}

int Find_Maximum(int *iPtr)
{
    static i=0,Max=0;
      
       if(i==0)
        {
           Max=iPtr[i];
        }
       else if(iPtr[i]>Max)
        {
          Max=iPtr[i];
        }
  
       i++;
       
       if(i<Size)
        {
          Find_Maximum(iPtr);
        }
        
      return Max;
}

int main()
{
  int Arr[Size],iMax=0;
  
   Accept_Array_Elements(Arr);
   
   iMax=Find_Maximum(Arr);
   
   printf("\n***********************\n");
   
   printf("\n Maximum Number=%d\n",iMax);
   
   printf("\n***********************\n");
   
  return 0;
}