#include<stdio.h>
#include<conio.h>
#include<string.h>

int length;

int length_of_string()

{

    int i=0;
    char str[100];
    printf("Enter the string:-");
    scanf("%[^\n]",&str);

    while (str[i] != '\0')
    {
        i++;
    }

    int b = strlen(str);

    printf("Using String Length Function:- %d\n",b);

    length = i;
    return length;
}

void play_with_pointers(int a)
{
    int *ptr = &a;

    printf("%u",ptr);
    printf("\n%u",*ptr);
    printf("\n%u",a);
    printf("\n%u",&a);
    a = 10;
    printf("\n%u",a);
    *ptr = 15;
    printf("\n%u",a);
}

void printarray(int arr[],int n)
{
    int i;
   for (i=0;i<n;i++)
   {
    printf("%d",arr[i]);
   }
}

int main()
{

int a;
int n = 10;
int arr[n];

//memset(arr,0,n*sizeof(arr[0]));

//play_with_pointers(5);
length_of_string();
printf("length of the string is:- %d",length);
    getch();
    return 0;
}
