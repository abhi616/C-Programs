#include<stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{  
  int No,p=1,i,temp;  

    up:
    printf("Enter Number To Check Number Is Prime Or Not:");
    scanf("%d",&No);

      temp=No;

      if(temp==0||temp==1)
      {
        printf("\nNeutral Number\n");
        goto up;                //Goes Control to 'up' variable  
      }

     for(i=2;i<=temp/2;i++)
      {
        if(temp%i==0)
          {
            p=0;
            break;
          }        
      }

 (p==1?printf("\n%d Is Prime",No):printf("\n%d Is Not Prime",No));
     
  getch();   
  return 0;
 }
  
