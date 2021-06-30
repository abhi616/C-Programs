#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int Size,Cnt,i,j,Ret;    // Size Is For Taking Size Of Array & Cnt is For Taking Count Of Elements
   

void Accept_Array_Elements(int F_Arr[])
{

  Up:
  printf("\nHow Many Elements You Want To Enter In An Array : ");
  scanf("%d",&Cnt);

 /* 
    If Any Case User Enter Element Count Is Greater Than Array Size 
    So To Handle That Condition Need To Write If
 */
   
  if(Cnt<=Size&&Cnt>0)
  {
    for(i=0;i<Cnt;i++)
     {
       printf("\nEnter %d Element : ",i+1);
       scanf("%d",&F_Arr[i]);
     }


  /* 
      This Loop is just for to initialise 0 to Remaining Elements Which Are 
      Not Entered By User If Any Case Nd Also Because Of Garbage Value
  */
   
     for(;i<Size;i++)
     {
       F_Arr[i]=0;
     }    
    
   }

  else
  {
     printf("\n----------------------------------------------------------------");
     printf("\n\n**Element Count Must Be Less Than Or Equal To Size Of Array i.e %d\n",Size);
     printf("\nSo,Please Enter Valid Element Count In Between (1-%d)...!**\n",Size);
     printf("\n----------------------------------------------------------------\n\n");
     goto Up;
  }

  return;
}


void Display_Array_Elements(int F_Arr[])
{
  // Display Array Elements
  printf("\nEntered Array Elements ==> \n\n");
   
  for(i=0;i<Size;i++)
  {
     printf("|%-3d",F_Arr[i]);
  }
  
  printf("|\n");

  return;
}


int Insert_New_Element(int f_Arr[])
{
  int Index=0,New_N=0;

   if(Cnt<Size)         //   To Check User Enter All Array Elements Or Not If Not Then Only We Can Insert New Element Otherwise Not
   {
      printf("\nEnter New Element : ");
      scanf("%d",&New_N);

      Up:
      printf("\nWhere You Want To Insert Your New Element.Enter Index In Between(0-%d) : ",Size-1);
      scanf("%d",&Index);

      if(Index>Size-1||Index<0)
      {
         if(Index<0)         // Handling Negative Input
        {
          printf("\n-------------------------------------------------------------\n");
          printf("\nIndex Must Be In Positive Number.Enter Valid Index....!\n");
          printf("\n-----------------------------------------------------------\n");
          goto Up;
        }

        printf("\n-----------------------------------\n");
        
        printf("\nPlease Enter Valid Index...!\n");
        
        printf("\n-----------------------------------\n");
        goto Up;
      }
       
     /*
       
        Here, Declaring New Array Which Consist 1st Array Elements From That Index 
        Where We Want To Insert Our New Element.               
     
     */
       int Temp[Size-Index];
       int Idx=Index;

      // To Copy 1st Array Elements From That Index Where We Insert Our New Element
       for(j=0;j<Size-(Index+1);j++,Idx++)
       {
         Temp[j]=f_Arr[Idx];
       }
       
     // This Loop is For To Insert New Element
      for(i=0;i<Size;i++)
      {
        if(i==Index)          // Here We Check If Entered Index Is Equal To i Then Our New Element Will Insert There
        {
          f_Arr[i]=New_N;      // Inserting New Element At That Index Where We Want To Insert

          for(j=0;i<Size;i++,j++)    // For Coping Elements From Inserting Element Index Or 2nd Array Elements To 1st Array Element.
          {
            f_Arr[i+1]=Temp[j];
          }
          printf("\n-----------------------------------------------------\n");
          
          printf("\n%d Inserted Successfully At %d Position...!!!\n",New_N,Index+1);
        
          printf("\n-----------------------------------------------------\n");
        
        }
      }
      
     }

   else
   {
      Ret++;         // If Array Is Full Then Only Ret will Increment And Return It To Main And It's Verify That Array Is Full.
      printf("\n\nSorry,Array Is Already Full You Can't Insert Any New Element...!\n");
   }

  return Ret;
}


int main()
{
  printf("************************************************************\n");
  
  up:
  printf("\nEnter Size Of Array : ");
  scanf("%d",&Size);

 if(Size>0)
  {
     int Arr[Size];    // Declaring/Creating & Initialising Array

     Accept_Array_Elements(&Arr);     // Accept Array Elements

     printf("\n************************************************************\n");
  
     printf("\nBack To main()...! Press Any Key\n");

     getch();
  
     printf("\n\n************************************************************\n");

     Display_Array_Elements(&Arr);      // Display Array Elements

     printf("\n\n********************************************************************\n");
  
     Ret=Insert_New_Element(&Arr);         // Insert New Element In An Array


     if(Ret==0)        //   This Will Only Work When We Insert New Element Otherwise Not.
      { 
          printf("\n\n***********************************************************************\n");  
     
          Display_Array_Elements(&Arr);    // Again Display Array Elements
      }
  
     printf("\n*************************************************************\n");
 
     printf("\n\nThanks....!!!\n");
     
  }
 else
 {
     printf("\n**Size Must In Positive Number & Greater Than 0....!**\n");
     goto up;
 }
 
  getch();
  return 0;
}