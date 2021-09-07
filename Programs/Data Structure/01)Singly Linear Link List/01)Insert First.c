#include <stdio.h>

//Compiler version gcc  6.3.0

struct Node
{
  int Data;
  struct Node *Next;
};

void Insert_First(struct Node**,int);
void Display_LL(struct Node*);


int main()
{
  struct Node* Head=NULL;
  
  Display_LL(Head);
  printf("\n-----------------------------------------\n");
  Insert_First(&Head,11);
  Display_LL(Head);
  printf("\n\n-----------------------------------------\n");
  Insert_First(&Head,21);
  Insert_First(&Head,51);
  Insert_First(&Head,41);
  printf("\n-----------------------------------------\n");
  Display_LL(Head);
  printf("\n\n-----------------------------------------\n");
  
  return 0;
}

void Insert_First(struct Node **First,int Ele)
{
   struct Node *NewN=NULL;
   
   NewN=(struct Node*)malloc(sizeof(struct Node*));
   
   if(NewN==NULL)
   {
     printf("\nNode Creation Denied...!!!\n");
     return;
   }
   
   NewN->Data = Ele;
   NewN->Next = NULL;
   
   if(*First==NULL)
   {
     *First=NewN;
   }
   else
   {
     NewN->Next = *First;
     *First = NewN;   
   }
   
   printf("\n\n%d Inserted Successfully.\n",NewN->Data);
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
     printf("\nLink List Elements Are : \n");
     for(;First!=NULL;First=First->Next)
     {
       printf("\n|%d|",First->Data);
     }
   }
   
   return;
}