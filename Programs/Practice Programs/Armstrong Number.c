/*

    Input : 371

    Output : 371 is Armstrong Number.

    371 = 3^3+7^3+1^3
        = 27 + 343 + 1
        = 371

    371 == 371


-------------------------------------

 Input : 145

    Output : 145 is Not Armstrong Number.

    145 = 1^3+4^3+5^3
        = 1 + 64 + 125
        = 190

    145 != 190


*/


#include<stdio.h>
#include<conio.h>


int main()
{
    int iNo,Temp,Rem,Cube=1,Res=0;

    Up:
    printf("\n Enter Number : ");
    scanf("%d",&iNo);

    if(iNo<0)
    {
         printf("\n Please Enter Valid Number\n");
         goto Up;
    }

    Temp = iNo;

    while(Temp>0)
    {
        Rem = Temp%10;
        Cube = Cube*Rem*Rem*Rem;

        Res = Res + Cube;
        Temp/=10;
        Cube = 1;
    }

    printf("\n--------------------------------------------------\n");

    if(Res==iNo)
    {
        printf("\n %d is Armstrong Number\n",iNo);
    }
    else
    {
        printf("\n %d is Not Armstrong Number\n",iNo);
    }

    printf("\n--------------------------------------------------\n");


    getch();
    return 0;

}
