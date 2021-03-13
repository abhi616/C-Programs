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

int Find_Minimum(int *iPtr)
{
    static i=0,Min=0;
      
       if(i==0)
        {
           Min=iPtr[i];
        }
       else if(iPtr[i]<Min)
        {
          Min=iPtr[i];
        }
  
       i++;
       
       if(i<Size)
        {
          Find_Minimum(iPtr);
        }
        
      return Min;
}

int main()
{
  int Arr[Size],iMin=0;
  
   Accept_Array_Elements(Arr);
   
   iMin=Find_Minimum(Arr);
   
   printf("\n***********************\n");
   
   printf("\n Minimum Number=%d\n",iMin);
   
   printf("\n***********************\n");
   
  return 0;
}