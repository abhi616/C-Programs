#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{ 
  char nm[20],course[10],city[10];
  int rno;

   printf("Enter Your Name:"); 
   gets(nm);  

   printf("\nEnter Your Roll Number:");
   scanf("%d",&rno);

   printf("\nEnter Your Course Name:");
   scanf("%s",&course);

   printf("\nEnter Your City Name:");
   scanf("%s",&city);

   clrscr();

   printf("*****Student Information*****");
 
   printf("\nName==>%s\nRoll No.==>%d\nCourse Name==>%s\nCity Name==>%s\n",nm,rno,course,city);
    
  getch();
  return 0;
 }
  
