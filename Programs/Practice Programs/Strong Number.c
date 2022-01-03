/*

    Input : 145

    Output : 145 is Strong Number.

    145 = 1!+4!+5!
        = 1+24+120
        = 145

    145 == 145


-------------------------------------

 Input : 134

    Output : 134 is Not Strong Number.

    134 = 1!+3!+4!
        = 1+6+24
        = 31

    134 != 31


*/


#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,Rem=0,Fact=1,Sum=0;

    Up:
    printf("\n Enter Number : ");
    scanf("%d",&No);

    if(No<0)
    {
         printf("\n Please Enter Valid Number\n");
         goto Up;
    }

    Temp = No;

    while(Temp>0)
    {
        Rem = Temp%10;

        if(Rem>0)
        {
          for(;Rem>0;Rem--)
          {
              Fact = Fact*Rem;
          }
        }
        else
        {
           Fact = 1;
        }

        Sum = Sum+Fact;
        Fact = 1;
        Temp/=10;
    }

    printf("\n--------------------------------------------------\n");

    if(Sum==No)
    {
        printf("\n %d is Strong Number\n",No);
    }
    else
    {
        printf("\n %d is Not Strong Number\n",No);
    }

    printf("\n--------------------------------------------------\n");


    getch();
    return 0;
}

