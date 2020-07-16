#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char a[] = "IBM cognitive computing|IBM ""cognitive"" computing is a revolution| ibm cognitive  computing|'IBM Cognitive Computing' is a revolution?";
    char b[20][20];
    int i, j = 0, k = 0, n, m;

    for (i = 0;a[i] != '\0';i++){
        if (a[i] == '|' || a[i] == '?')
        {
            a[i] = ' ';
        }

    }

    for (i = 0;a[i] != '\0';i++)
    {
        if (a[i] == ' ')
        {
            b[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            b[k][j] = a[i];
            j++;
        }
    }
    b[k][j] = '\0';
    for (i = 0;i <= k;i++)
    {
        for (j = i + 1;j <= k;j++)
        {
            if (strcmp(b[i], b[j]) == 0)
            {
                for (m = j;m <= k;m++)
                    strcpy(b[m], b[m + 1]);
                k--;
            }
        }
    }
    for (n = 0;n <= k;n++)
    {
        cout << b[n] << " " ;
    }
}
