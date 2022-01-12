/*

    Input :
             1st Array Elements i.e Arr1[5] = {1,2,3,4,5}

             2nd Array Elements i.e Arr2[5] = {2,3,7,0,5}


    Output :

             Element Which Is Absent In 2nd Array Is : 1 4


*/

#include<stdio.h>
#include<conio.h>


int main()
{
     int Arr1[5],Arr2[5],Found[5]={0},i,j,Len;
     Len = sizeof(Arr1)/4;

     // Accept 1st Array Elements
     printf("\n Enter 1st Array Elements : \n");

     for(i=0;i<Len;i++)
     {
         printf("\n Enter %d Number : ",i+1);
         scanf("%d",&Arr1[i]);
     }

    printf("\n---------------------------------------------------------------------\n");

    printf("\n 1st Array Elements Are As Follows : \n");

    for(i=0;i<Len;i++)
     {
         printf("\t\t\t\t\t%d \n",Arr1[i]);
     }

    printf("\n---------------------------------------------------------------------\n");

    // Accept 2nd Array Elements
     printf("\n Enter 2nd Array Elements : \n");

     for(i=0;i<Len;i++)
     {
         printf("\n Enter %d Number : ",i+1);
         scanf("%d",&Arr2[i]);
     }

     printf("\n---------------------------------------------------------------------\n");

    printf("\n 2nd Array Elements Are As Follows : \n");

    for(i=0;i<Len;i++)
     {
         printf("\t\t\t\t\t%d \n",Arr2[i]);
     }

    printf("\n---------------------------------------------------------------------\n");

    // Check 1st Array Elements Is Present In 2nd Array Or Not.If Present Then Index Of That Element In Found Array Will Increment.
     for(i=0;i<Len;i++)
     {
         for(j=0;j<Len;j++)
         {
             if(Arr1[i]==Arr2[j])
             {
                 Found[i]++;
             }
         }
     }

    printf("\n Elements Which Are Not Present In 2nd Array : \n");

    int Cnt = 0;

    for(i=0;i<Len;i++)
     {
         if(Found[i]==0)
         {
            printf("\t\t\t\t\t\t%d \n",Arr1[i]);
            Cnt++;
         }
     }

     if(Cnt==0)
     {
        printf("\n\t All 1st Array Elements Are Present in 2nd Array..!!!!! \n");
     }

     printf("\n---------------------------------------------------------------------\n");

     getch();
     return 0;
}
