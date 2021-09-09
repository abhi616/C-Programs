#include <stdio.h>

//Compiler version gcc  6.3.0

struct Node
{
  int Data;
  struct Node *Next;
};


void Insert_First(struct Node**,int);
void Insert_Last(struct Node**,int);
void Insert_At_Position(struct Node**,int,int);
int Count_LL_Ele(struct Node*);
void Display_LL(struct Node*);

int main()
{
  struct Node *Head = NULL;
  
  Count_LL_Ele(Head);
  
  printf("\n-------------------------------------------------\n");
  
  Insert_First(&Head,11);
  Insert_First(&Head,21);
  Insert_First(&Head,51);  
  
  Display_LL(Head);
  
  printf("\n-------------------------------------------------\n");
  
  printf("\nTotal Link List Element Count = %d\n",Count_LL_Ele(Head));
  
  printf("\n-------------------------------------------------\n");
  
  Insert_Last(&Head,65); 
  
  Insert_At_Position(&Head,97,2);
  Insert_At_Position(&Head,97,1);
  Insert_At_Position(&Head,97,8);
  
  Display_LL(Head);
  
  printf("\n-------------------------------------------------\n");
  
  Insert_At_Position(&Head,289,4);
  Display_LL(Head);
  
  printf("\n-------------------------------------------------\n");
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


void Insert_Last(struct Node **First,int Ele)
{
   struct Node *NewN = NULL;
   struct Node *Temp = *First;
   
   NewN = (struct Node*)malloc(sizeof(struct Node*));
   
   if(NewN == NULL)
   {
     printf("\nNode Creation Denied.\n");
   }
   
   NewN->Data = Ele;
   NewN->Next = NULL;
   
   if(*First == NULL)
   {
     *First = NewN;
   }
   else
   {
      for(;Temp->Next!=NULL;Temp=Temp->Next);
      
      Temp->Next = NewN;      
   }
   
   printf("\n%d Inserted Successfully.\n",NewN->Data);
}


int Count_LL_Ele(struct Node *First)
{     
   int Cnt = 0;
   
   if(First == NULL)
   {
     printf("\nLink List Is Empty.\n");
   }
   else
   {     
     for(;First!=NULL;First=First->Next,Cnt++);            
   }
   
   return Cnt;
}


void Display_LL(struct Node *First)
{
    if(First == NULL)
    {
      printf("\nLink List Is Empty.\n");
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
}


void Insert_At_Position(struct Node **First,int Ele,int Pos)
{
  int Ele_Cnt = Count_LL_Ele(*First);
  
  if(Pos <= 0 || Pos > Ele_Cnt+1)
  {
    printf("\nInvalid Position.\n");    
  }
  else if(Pos==1)
  {
    Insert_First(First,25);
  }
  else if(Pos==Ele_Cnt+1)
  {
    Insert_Last(First,87);
  }
  else
  {
     struct Node *NewN = NULL;
     struct Node *Temp = *First;
     
     NewN = (struct Node*)malloc(sizeof(struct Node*));
     
     if(NewN == NULL)
     {
       printf("\nNode Creation Denied.\n");
       return;
     }
     
     NewN->Data = Ele;
     NewN->Next = NULL;
     
     int P = Pos;    // To Save Value Of Position Variable
     
     for(;Pos>2;Temp=Temp->Next,Pos--);
     
     NewN->Next = Temp->Next;
     Temp->Next = NewN;
     
     printf("\n%d Inserted Successfully At %d Position\n",NewN->Data,P);
  }
  
  return;
}







