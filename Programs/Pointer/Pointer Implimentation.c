#include<stdio.h>
#include<conio.h>


int main()
{
      int iNo = 11 , *iPtr1 = &iNo , *iPtr2 = &iNo;

      printf("\n\t\t*********************  Pointer Implimentation  *********************\n");

      printf("\n Value Of iNo Using Pointer iPtr1 = %d",*iPtr1);
      printf("\n Address Of iNo Using iPtr1 = %d",iPtr1);
      printf("\n Address Of iPtr1 = %d\n",&iPtr1);

      printf("\n--------------------------------------------------------------\n");

      printf("\n Value Of Variable Using Pointer iPtr2 = %d",*iPtr2);
      printf("\n Address Of Variable Using iPtr2 = %d",iPtr2);
      printf("\n Address Of iPtr2 = %d\n",&iPtr2);

      iNo = 21;

      printf("\n--------------------------------------------------------------\n");

      printf("\n New Value Of iNo Using Pointer iPtr1 = %d",*iPtr1);
      printf("\n New Value Of Variable Using Pointer iPtr2 = %d\n",*iPtr2);

      printf("\n--------------------------------------------------------------\n");

      *iPtr1 = 51;

      printf("\n New Value Of iNo = %d",iNo);
      printf("\n Value Of iNo Using Pointer iPtr1 = %d",*iPtr1);
      printf("\n Value Of Variable Using Pointer iPtr2 = %d\n",*iPtr2);

      printf("\n--------------------------------------------------------------\n");
      getch();
      return 0;
}

