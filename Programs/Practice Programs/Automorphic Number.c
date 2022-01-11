/*

    Input :
              Enter Number : 5

    Output : 5 Is Automorphic Number.

       Explain :
                 Find Out Square Of 5 i.e 25

                 Last Digit is Equal With Entered Number i.e 5 = 5

                 similarly,


                 376 Is Automorphic Number

                 Find Out Square Of 376 i.e 141376

                 Last 3 Digits are Equal With Entered Number i.e 376 = 376


*/

#include<stdio.h>
#include<conio.h>


int main()
{
    int iNo = 0 , Temp = 0 , Rem=0 , Cnt=0;

    Up:
    printf("\n Enter Number : ");
    scanf("%d",&iNo);

    if(iNo<=0)
    {
        printf("\n Please Enter Valid Number.\n");
        goto Up;
    }
    Temp = iNo;

    for(;Temp>0;Temp/=10,Cnt++);               // Find Count Of Digits From Entered Number.

    Temp = iNo*iNo;

    printf("\n Square Of %d = %d\n",iNo,Temp);

    printf("\n------------------------------------------\n");


    // Reverse Given Number Till Count
    for(int i=0;i<Cnt;Temp/=10,i++)
    {
        Rem = Temp%10 + Rem*10;
    }

    Temp = Rem;           // Take Value Of Rem Into Temp To Reverse Again

    Rem = 0;

    // Reverse The Number Again To Check Whether It Is Equal With Entered Number Or Not
    for(;Temp>0;Temp/=10)
    {
        Rem = Temp%10 + Rem*10;
    }


    if(iNo==Rem)
    {
        printf("\n %d is Automorphic.\n",iNo);
    }
    else
    {
        printf("\n %d is Not Automorphic.\n",iNo);
    }

    printf("\n------------------------------------------\n");

    getch();
    return 0;

}
