#include <iostream>
#include <string>
using namespace std;

#include <stdio.h>
#include <string.h>
�
int main()
{
    int i, j = 0, k = 0, count = 0;
    char str[] = "IBM cognitive computing|IBM ""cognitive"" computing is a revolution| ibm cognitive  computing|'IBM Cognitive Computing' is a revolution?";
    char key[20];
    char str1[10][20];
�
   // cout << "enter string:" ;
   // scanf("%[^\n]s",str);
�
/* Converts the string into 2D array */
    for (i = 0; str[i]!= '\0'; i++)
    {
        if (str[i]==' ')
        {
            str1[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            str1[k][j] = str[i];
            j++;
        }
    }
    str1[k][j] = '\0';
    cout << "enter key:" ;
    cin >> key ;
�
/* Compares the string with given word */
    for (i = 0;i < k + 1; i++)
    {
        if (strcmp(str1[i], key) == 0)
        {
            for (j = i; j < k + 1; j++)
            strcpy(str1[j], str1[j + 1]);
            k--;
        }
�
    }
    for (i = 0;i < k + 1; i++)
    {
        cout << str1[i] ;
    }
}