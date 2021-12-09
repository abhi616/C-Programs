#include<stdio.h>
#include<conio.h>


int main()
{
     int i = 0;                    /// Normal Variable Declaration & Initialisation
     int *j = &i;                 ///  Pointer Variable Declaration & Initialisation Which Stores Address Of i

     printf("\n-----------------------------------\n");

     printf("\n Address Of i = %u",&i);
     printf("\n Value Of i = %d\n",i);

     printf("\n Address Of j = %u",&j);
     printf("\n Value Of j = %d\n",j);

     i = 20;

     printf("\n Value Of i = %d",i);
     printf("\n Value At Address %d = %d\n",j,*j);

     printf("\n-----------------------------------\n");

     getch();
     return 0;

}
