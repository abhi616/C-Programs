#include <stdio.h>

//Compiler version gcc  6.3.0

struct Node
{
  int Data;
  struct Node *Next;
};


void Insert_First(struct Node**,int);
void Delete_Last(struct Node**);
void Display_LL(struct Node*);

int main()
{
  struct Node *Head = NULL;
  
  Insert_First(&Head,11);
  Insert_First(&Head,21);
  Insert_First(&Head,51);
  Display_LL(Head);
  
  printf("\n-------------------------------------------\n");
  
  Delete_Last(&Head);  
  Display_LL(Head);
  
  printf("\n-------------------------------------------\n");
 
  Delete_Last(&Head);
  Display_LL(Head);
  
  printf("\n-------------------------------------------\n");
  
  Insert_First(&Head,56);
  Insert_First(&Head,67);
  
  Display_LL(Head);
  
  printf("\n-------------------------------------------\n");
  
  return 0;
}


void Insert_First(struct Node **First,int Ele)
{
  struct Node *NewN = NULL;
  
  NewN = (struct Node*)malloc(sizeof(struct Node*));
  
  if(NewN == NULL)
  {
     printf("\nNode Creation Denied.\n");
     return;
  }
  
  NewN->Data = Ele;
  NewN->Next = NULL;
  
  if(*First == NULL)
  {
     *First = NewN;
  }
  else
  {
     NewN->Next = *First;
     *First = NewN;
  }
  
  printf("\n%d Inserted Successfully.\n",NewN->Data);
  return;
}


void Delete_Last(struct Node **First)
{
   struct Node *Temp = *First;
   
   if(*First == NULL)
   {
     printf("\nLink List Is Already Empty.Can't Delete Any Element.\n");
     return;
   }  
   
   if(Temp->Next == NULL)
   {
     printf("\n%d Is Removed From Link List\n",Temp->Data);
     free(Temp);
   }
   else
   {
     
      for(;Temp->Next->Next!=NULL;Temp=Temp->Next);
      
      printf("\n%d Is Removed From Link List.\n",Temp->Next->Data);

      free(Temp->Next);
      
      Temp->Next = NULL;          
       
   }
  
   return;   
}


void Display_LL(struct Node *First)
{
   if(First==NULL)
   {
     printf("\nLink List Is Empty.Can't Display Any Element\n");
   }
   else
   {
     printf("\nLink List Elements : \n\n");
     for(;First!=NULL;First=First->Next)
     {
       printf("|%d",First->Data);
     }
     printf("->NULL\n");
   }
   
   return;
}

