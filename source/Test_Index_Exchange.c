#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>


// Re-format the string in the order of xxxx-xxx-xxx-xxx.... and so on
char reformat_S[100];


char * remove_strays(char* c[]){

char *oldstr = c;

char *newstr = malloc(strlen(oldstr)+1);
char *np = newstr, *op = oldstr;
do{
    if (*op != '-' && *op != ' ')
        *np++ = *op;
}  while (*op++);

return newstr;
}

char * solution(char* S[]) {
    // write your code in C99 (gcc 4.8.2)
  /*  int i,j;

    int d = strlen(S);

    for(i=0;i<d;i++){
            if(i == 4 && i != 0){
                S[i] = '-';
            }



           /* reformat_S[j] = S[i];
       if (i == (4*i - 1)){
           reformat_S[i] = '-';
           break;
           }
       else if(S[i] == '-'){
            break;
            }
        else if(S[i] == ' '){
            break;
            }

        else {


            break;
        }
            }
        }   */


        strcpy(reformat_S,S);
        printf("The reformatted string is:- %s",reformat_S);

        return reformat_S;
}

int main (){

//char a;
char x[] = "2236-555 -56-897";

//int c = strlen(x);
//printf("%d",c);
char *a = remove_strays(x);
char *b = solution(a);

//printf("The reformatted string is:- %s" , a);

getch();
return 0;

}
