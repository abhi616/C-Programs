/*

    Input :

           Enter Row & Column Count : 6

    Output :

             *  *  *  *  *  *
             *  *  *  *  *
             *  *  *  *
             *  *  *
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

    for(i=Cnt;i>0;i--)
    {
        for(j=0;j<Cnt;j++)
        {
            if(j<i)
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

