#include<stdio.h>
#include<conio.h>
#include<math.h>


char * solution(char *S) {
    // write your code in C99 (gcc 4.8.2)

    char reformat_S[100];
    int d = strlen(S);

    for(int i=0;i<d;i++){
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

        for (int j=0;j<i;j++){
            reformat_S[j] = S[i];
            break;
        }
            }

        }

        printf("The reformatted string is:- %s",reformat_S);

        return reformat_S;
}


int main (){


char a;
char x[] = "2236-555 -56-897";

//int c = strlen(x);
//printf("%d",c);
a = solution(x);

printf("%s" , a);

getch();
return 0;

}
