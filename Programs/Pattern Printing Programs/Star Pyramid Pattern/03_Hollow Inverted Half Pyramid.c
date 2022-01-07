/*

    Input :

           Enter Row & Column Count : 6

    Output :

             *  *  *  *  *  *
             *           *
             *        *
             *     *
             *  *
             *

*/

#include<stdio.h>
#include<conio.h>


int main()
{
    int Cnt,i,j;

    printf("\n Enter Row & Column Count : ");
    scanf("%d",&Cnt);

    printf("\n-------------------Pattern-------------------------\n\n");

    for(i=0;i<Cnt;i++)
    {
        for(j=0;j<Cnt;j++)
        {
            if(j==0||i==0||j==Cnt-i-1)
            {
               printf(" * ");
            }
            else
            {
                printf("   ");
            }

        }

        printf("\n");
    }

    printf("\n-------------------Pattern-------------------------\n\n");

    getch();
    return 0;
}

