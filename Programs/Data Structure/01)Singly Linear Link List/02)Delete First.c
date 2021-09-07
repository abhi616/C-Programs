#include <stdio.h>

//Compiler version gcc  6.3.0

struct Node
{
  int Data;
  struct Node *Next;
};

void Insert_First(struct Node**,int Ele);
void Delete_First(struct Node**);
void Display_LL(struct Node*);

int main()
{
  struct Node *Head;
  
  Insert_First(&Head,11);
  Insert_First(&Head,21);
  Delete_First(&Head);
  Delete_First(&Head);
  return 0;
}

void Insert_First(struct Node **First,int Ele)
{
   struct Node *NewN = NULL;
   
   NewN = (struct Node*)malloc(sizeof(struct Node));
   
   if(NewN == NULL)
   {
     printf("\nLink List Creation Denied...!\n");
     return;
   }
   
   NewN->Data = Ele;
   NewN->Next = NULL;
   
   if(*First==NULL)
   {
     *First = NewN;
   }
   else
   {
     *First = NewN->Next;
     *First = NewN;
   }
   
   printf("\n%d Inserted Successfully.\n",NewN->Data);
   return;
}

void Delete_First(struct Node **First)
{
   struct Node *Temp = *First;
   
   if(*First == NULL)
   {
     printf("\nLink List Is Already Empty.Can't Delete Any Element.\n");
     return;
   }
   
   else if(Temp->Next == NULL)
   {
     *First = NULL;
   }
   else
   {
     *First = Temp->Next;    
   }
   
   printf("\nRemoved Element From Link List Is %d\n",Temp->Data);
   free(Temp);
   return;
}