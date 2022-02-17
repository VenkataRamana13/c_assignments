/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : matrix_sum.c

* Purpose :

* Creation Date : 24-01-2022

* Last Modified : Mon 24 Jan 2022 07:42:06 PM IST

* Created By : Venkata Ramana

_._._._._._._._._._._._._._._._._._._._._.*/
#include <stdio.h>
int main(){
    int M, N; 
    scanf("%d%d", &M, &N);
    long long a[M][N], b[M][N], c[M][N];
    for (long long *p = (long long *)a; p <= &a[M - 1][N - 1]; p++){
        scanf("%lld", p);
    }
    for (long long *p = (long long *)b; p <= &b[M - 1][N - 1]; p++){
        scanf("%lld", p);
    }
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf("%lld ", c[i][j]);
        }
        printf("\n");
    }
}
