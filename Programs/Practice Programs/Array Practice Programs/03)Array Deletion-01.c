#include <stdio.h>
#include<conio.h>


int Size=0,i=0,j=0,Cnt=0;


void Accept_Array_Elements(int F_Arr[])
{
  
  Up:
   printf("\nHow Many Elements You Want To Enter.Count Is In Between(1-%d) : ",Size);
   scanf("%d",&Cnt);


   /*
      Don't Want To Allow To Enter Count Is Greater Than Array Size.
      Also Don't Want To Enter Any Negative Count.
   */


   if(Cnt<=Size&&Cnt>0)
   {
      for(i=0;i<Cnt;i++)
      {
        printf("\nEnter %d Element : ",i+1);
        scanf("%d",&F_Arr[i]);
      }

      for(;i<Size;i++)
      {
        F_Arr[i]=0;
      }

   }
  else
   {
      printf("\n---------------------------------------\n");
      printf("\nPlease Enter Valid Count...!!!\n");
      printf("\n---------------------------------------\n");
      goto Up;
   }


   return;
}


void Display_Array_Elements(int f_Arr[])
{
  //Display Array Elements

  printf("\nEntered Array Elements ==> \n\n");

   for(i=0;i<Size;i++)
   {
     printf("|%-3d",f_Arr[i]);
   }

   printf("|\n");

   return;
}


void Delete_Element(int f_arr[])
{
    char Ch;
    int No,Found=0;

    fflush(stdin);
    
    //Here Taking That Number Which We Want Go Delete
    Up:
    printf("\nWhich Number You Want To Delete : ");
    scanf("%d",&No);           

    for(i=0;i<Cnt;i++)
    {
       if(f_arr[i]==No)
       {
         Found++;           // If The Number Is Found Which Means That Number Is Present In Given Array.
         for(;i<Cnt;i++)
         {
           f_arr[i]=f_arr[i+1];       // Moving Elements To One Index Back From Deleted Element.
         }

        printf("\n%d Deleted Successfully...!!!\n",No);

        if(Cnt==Size)       // In Case Array Is Already Full And We Delete 1 Element Then Last Index Value Comes Garbage So To Handle That Case This if is Necessary
        {
          f_arr[i-1]=0;
        }

       }
    }

   if(Found==0)
   {
     
     fflush(stdin);
     printf("\nDoesn't Found \'%d\' In Given Array...!\n",No);
     printf("\nDo You Want To Enter Again (y/n): ");
     scanf("%c",&Ch);

     if(Ch=='Y'||Ch=='y')
     {
       goto Up;
     }
    else
     {
       printf("\n--------------\n");
       printf("\nOk...!\n");
       printf("\n--------------\n");
     }

   }

 return;
}


int main()
{
  printf("************************************************************\n");

   up:
   printf("\nEnter Size Of Array : ");
   scanf("%d",&Size);

   if(Size>0)          // Checking Size Is Positive Or Not And If Yes Only Then We Can Create Array Of Entered Size. 
   {
       int Arr[Size];

       Accept_Array_Elements(&Arr);

       printf("\n************************************************************\n");

       printf("\nBack To main()...! Press Any Key\n");

       getch();

       printf("\n************************************************************\n");

       Display_Array_Elements(&Arr);

       printf("\n************************************************************\n");

       Delete_Element(&Arr);

       printf("\n*************************************************************\n");

       Display_Array_Elements(&Arr);

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