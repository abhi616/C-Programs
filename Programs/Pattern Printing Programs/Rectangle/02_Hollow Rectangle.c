/*

    Input :

           Enter Row & Column Count : 6 6

    Output :

             *  *  *  *  *  *
             *              *
             *              *
             *              *
             *              *
             *  *  *  *  *  *

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
            if(i==0||j==0||i==R-1||j==C-1)
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
