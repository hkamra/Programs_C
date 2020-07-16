#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[6][6];

    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){

          scanf("%d",&arr[arr_i][arr_j]);
       }
    }

    int m,n,h = 0;
    int arr_sum1;
    int b = 0;
    int sum[15];

    for (int k = 0; k <= 3; k++){
        for (int l = 0; l <= 3;l++){

            for (m = 0; m < 2 ; m++){
            arr_sum1 = arr[k][m] + b;
            b = arr_sum1;
                m++;
            }
            arr_sum1 = arr[k][m] + b;

            arr_sum1 = arr_sum1 + arr[k+1][l+1];

            int arr_sum2;
            int c = 0;

            for (n = 0; n < 2; n++){
                arr_sum2 = arr[k+2][n] + c;
                c = arr_sum2;
                n++;
            }
            arr_sum2 = arr[k+2][n] + c;

            int arr_sum;
            arr_sum = arr_sum1 + arr_sum2;

            sum[h] = arr_sum;
            h++;
        }

    }

    printf("%d",h);

    for (int s = 0; s < h ;s++){
        for (int t = s+1; t < h; t++){


            if (sum[s] > sum[t]){

                int a;
                a = sum[s];
                sum[s] = sum[t];
                sum[t] = a;
            }
        }
    }

    printf("%d",sum[15]);

    return 0;
}
