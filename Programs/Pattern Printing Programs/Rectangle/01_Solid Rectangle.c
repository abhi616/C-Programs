/*

    Input :

           Enter Row & Column Count : 5 5

    Output :

             *  *  *  *  *
             *  *  *  *  *
             *  *  *  *  *
             *  *  *  *  *
             *  *  *  *  *

*/

#include<stdio.h>
#include<conio.h>


int main()
{
    int R,C,i,j;

    printf("\n Enter Row & Column Count : ");
    scanf("%d%d",&R,&C);

    printf("\n-------------------Pattern-------------------------\n\n");

    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf(" * ");
        }

        printf("\n");
    }

    printf("\n-------------------Pattern-------------------------\n\n");

    getch();
    return 0;
}
