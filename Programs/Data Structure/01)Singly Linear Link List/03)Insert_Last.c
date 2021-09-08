#include <stdio.h>

//Compiler version gcc  6.3.0

struct Node
{
  int Data;
  struct Node *Next;
};

void Insert_First(struct Node**,int);
void Display_LL(struct Node*);
void Insert_Last(struct Node**,int);

int main()
{
  struct Node *Head = NULL;
  
  Display_LL(Head);
  
  printf("\n----------------------------------------\n");
  
  Insert_Last(&Head,100);
  Insert_First(&Head,11);
  Insert_First(&Head,21);
  Insert_First(&Head,51);
  Display_LL(Head);
  
  printf("\n----------------------------------------\n");
  
  Insert_Last(&Head,41);
  Display_LL(Head);
  
  printf("\n----------------------------------------\n");
  
  Insert_Last(&Head,60);
  Insert_First(&Head,70);
  Display_LL(Head);
  
  printf("\n----------------------------------------\n");
  
  return 0;
}

void Insert_First(struct Node **First,int Ele)
{
   struct Node *NewN = NULL;
   
   NewN = (struct Node*)malloc(sizeof(struct Node));
   
   if(NewN==NULL)
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
  
  printf("\n%d Inserted Successfully...\n",NewN->Data);
  return;
  
}

void Display_LL(struct Node *First)
{
   if(First == NULL)
   {
     printf("\nLink List Is Empty.Can't Display Any Element.\n");
   }
  else
   {
     printf("\nLink List Elements : \n\n");
     for(;First!=NULL;First=First->Next)
     {
       printf("|%d|\n",First->Data);
     }
   }
   
   return;
}

void Insert_Last(struct Node **First,int Ele)
{
  struct Node *NewN = NULL;
  struct Node *Temp = *First;
  
  NewN = (struct Node*)malloc(sizeof(struct Node*));
  
  if(NewN==NULL)
  {
    printf("\nNode Creation Denied.\n");
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
    for(;Temp->Next!=NULL;Temp=Temp->Next);               
    
    Temp->Next = NewN;
     
  }
    
  printf("\n%d Inserted Successfully.\n",NewN->Data);
  
  return;
  
}
  
  
  




