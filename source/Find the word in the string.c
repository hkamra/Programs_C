#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"
#include "stdbool.h"

bool findTheWordInTheString(char* keyWord)
{
   bool found;

   char tempString[200];

   char tempKeyWord[15];

   char saveKeyWord[10];

   char string[] = "My name is Himanshu Kamra.""I am very good.""My age is 30.";

   strcpy(tempString,string);

   strcpy(tempKeyWord,keyWord);

   int strLength = strlen(tempString);

   int keyWordLength = strlen(tempKeyWord);

   //printf("%d\n",strLength);

   //printf("%d\n",keyWordLength);

   int i = 0,j;

   do
   {
      //printf("%c\n",tempString[i]);
      i++;
   }
   while(tempString[i] != tempKeyWord[0]);

   for(j = 0; i < strLength; i++)
   {
       saveKeyWord[j] = tempString[i];
       j++;

       //if(tempString[i] == tempKeyWord[keyWordLength - 1] && (j == keyWordLength))
       if(j == keyWordLength)
       {
           saveKeyWord[j] = '\0';
           break;
       }
   }

   printf("%s\n",saveKeyWord);

   /* Remember if the below function returs 0, it means the string compared are same */

   if (0 == strcmp(tempKeyWord,saveKeyWord))
   {
    found = true;
   }

   return found;

}

int main()
{
    bool foundWord = false;

    char* keyWord = "Himanshu";

    //printf("Enter the word you want to search: ");
    //scanf("%s",keyWord);

    foundWord = findTheWordInTheString(keyWord);

    if(foundWord == true)
    {
        printf("Key Word Found in the String.");
    }
    else
    {
        printf("Key Word is NOT Found in the String.");
    }

    return 0;
}
