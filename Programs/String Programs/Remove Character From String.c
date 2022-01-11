/*

     Input :

                 Enter String : Hiieyi Hiiello

                 Which Character You Want To Remove : i

     Output :
                ------------------------------------------------------------------

                 After Removing 'i' From Entered String.

                 Final String = Hey Hello

                ------------------------------------------------------------------


*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
      char Str[30],Ch,Str2[30];
      int Cnt=0;

      printf("\n Enter String : ");
      scanf("%[^\n]",&Str);

      fflush(stdin);

      printf("\n Which Character You Want To Remove : ");
      scanf("%c",&Ch);

      printf("\n------------------------------------------------------------------\n");

      for(int i=0,j=0;Str[i]!='\0';i++)
      {
          if(Str[i]==Ch)
          {
            Cnt++;
            continue;
          }
          Str2[j] = Str[i];
          j++;
      }

      if(Cnt>0)
      {
          printf("\n After Removing '%c' From Entered String.\n\n Final String = %s\n",Ch,Str2);
      }
     else
      {
         printf("\n Sorry But Entered String Doesn't Contain '%c' In It.\n\n Final String = %s\n",Ch,Str2);
      }


      printf("\n------------------------------------------------------------------\n");

      getch();
      return 0;

}
