#include<stdio.h>
#include<string.h>

int main()
{
    char Str1[20],Str2[20];
    char Ch;
    int i=0,Cnt1[25]={0},Cnt2[25]={0};
    int Len1=0,Len2=0,Ana=1;

     printf("Enter 1st String:");
     gets(Str1);
     printf("\nEnter 2nd String:");
     gets(Str2);

  
     Len1=strlen(Str1);//To Find First String Length
     Len2=strlen(Str2);//To Find Second String Length

     if(Len1==Len2)
      {
           //Find Count Of Each Letter Of First String

            for(i=0;Str1[i]!='\0';i++)
             {
                 
                 switch(Str1[i])
                 {
                   case 'A':
                   case 'a':                            
                            Cnt1[0]++;
                            break;
                   case 'B':
                   case 'b':
                            Cnt1[1]++;
                            break;

                   case 'C':
                   case 'c':
                            Cnt1[2]++;
                            break;
                   case 'D':
                   case 'd':
                            Cnt1[3]++;
                            break;
                   case 'E':
                   case 'e':
                            Cnt1[4]++;
                            break;
                   case 'F':
                   case 'f':
                            Cnt1[5]++;
                            break;
                   case 'G':
                   case 'g':
                            Cnt1[6]++;
                            break;
                   case 'H':
                   case 'h':
                            Cnt1[7]++;
                            break;
                   case 'I':
                   case 'i':
                            Cnt1[8]++;
                            break;
                   case 'J':
                   case 'j':
                            Cnt1[9]++;
                            break;
                   case 'K':
                   case 'k':
                            Cnt1[10]++;
                            break;
                   case 'L':
                   case 'l':
                            Cnt1[11]++;
                            break;
                   case 'M':
                   case 'm':
                            Cnt1[12]++;
                            break;
                   case 'N':
                   case 'n':
                            Cnt1[13]++;
                            break;
                   case 'O':
                   case 'o':
                            Cnt1[14]++;
                            break;
                   case 'P':
                   case 'p':
                            Cnt1[15]++;
                            break;
                   case 'Q':
                   case 'q':
                            Cnt1[16]++;
                            break;
                   case 'R':
                   case 'r':
                            Cnt1[17]++;
                            break;
                   case 'S':
                   case 's':
                            Cnt1[18]++;
                            break;
                   case 'T':
                   case 't':
                            Cnt1[19]++;
                            break;
                   case 'U':
                   case 'u':
                            Cnt1[20]++;
                            break;
                   case 'V':
                   case 'v':
                            Cnt1[21]++;
                            break;
                   case 'W':
                   case 'w':
                            Cnt1[22]++;
                            break;
                   case 'X':
                   case 'x':
                            Cnt1[23]++;
                            break;
                   case 'Y':
                   case 'y':
                            Cnt1[24]++;
                            break;
                   case 'Z':
                   case 'z':
                            Cnt1[25]++;
                            break;
                  
                         
                 }
             }

            //Find Count Of Each Letter Of Second String

            for(i=0;Str2[i]!='\0';i++)
             {
               switch(Str2[i])
                 {
                   case 'A':
                   case 'a':
                            Cnt2[0]++;
                            break;
                   case 'B':
                   case 'b':
                            Cnt2[1]++;
                            break;

                   case 'C':
                   case 'c':
                            Cnt2[2]++;
                            break;
                   case 'D':
                   case 'd':
                            Cnt2[3]++;
                            break;
                   case 'E':
                   case 'e':
                            Cnt2[4]++;
                            break;
                   case 'F':
                   case 'f':
                            Cnt2[5]++;
                            break;
                   case 'G':
                   case 'g':
                            Cnt2[6]++;
                            break;
                   case 'H':
                   case 'h':
                            Cnt2[7]++;
                            break;
                   case 'I':
                   case 'i':
                            Cnt2[8]++;
                            break;
                   case 'J':
                   case 'j':
                            Cnt2[9]++;
                            break;
                   case 'K':
                   case 'k':
                            Cnt2[10]++;
                            break;
                   case 'L':
                   case 'l':
                            Cnt2[11]++;
                            break;
                   case 'M':
                   case 'm':
                            Cnt2[12]++;
                            break;
                   case 'N':
                   case 'n':
                            Cnt2[13]++;
                            break;
                   case 'O':
                   case 'o':
                            Cnt2[14]++;
                            break;
                   case 'P':
                   case 'p':
                            Cnt2[15]++;
                            break;
                   case 'Q':
                   case 'q':
                            Cnt2[16]++;
                            break;
                   case 'R':
                   case 'r':
                            Cnt2[17]++;
                            break;
                   case 'S':
                   case 's':
                            Cnt2[18]++;
                            break;
                   case 'T':
                   case 't':
                            Cnt2[19]++;
                            break;
                   case 'U':
                   case 'u':
                            Cnt2[20]++;
                            break;
                   case 'V':
                   case 'v':
                            Cnt2[21]++;
                            break;
                   case 'W':
                   case 'w':
                            Cnt2[22]++;
                            break;
                   case 'X':
                   case 'x':
                            Cnt2[23]++;
                            break;
                   case 'Y':
                   case 'y':
                            Cnt2[24]++;
                            break;
                   case 'Z':
                   case 'z':
                            Cnt2[25]++;
                            break;

                 }
             }

         //Check Each Letter Count In Both Strings

            for(i=0;i<26;i++)
            {
               if(Cnt1[i]!=Cnt2[i])
                {
                  goto Dwn;
                }
            }

      }    
      else
      {
        Dwn:       
        Ana=0;
      }


      if(Ana==1)
      {
        printf("\nEntered Strings :\n \"%s\" And \"%s\" Are Anagram Strings...",Str1,Str2);
      }
     else
      {
        printf("\nEntered Strings:\n \"%s\" And \"%s\" Are Not Anagram Strings...",Str1,Str2);
      }


      return 0;
}
