/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : matrix_product.c

* Purpose :

* Creation Date : 24-01-2022

* Last Modified : Mon 24 Jan 2022 07:30:29 PM IST

* Created By : Venkata Ramana

_._._._._._._._._._._._._._._._._._._._._.*/
#include <stdio.h>
int main(){
    int M, N, P;
    scanf("%d%d%d", &M, &N, &P);
    long long a[M][N], b[N][P];
    long long c[M][P];
    for (long long *p = (long long *)a; p <= &a[M-1][N-1]; p++){
        scanf("%lld", p);
    }
    for (long long *p = (long long *)b; p <= &b[N-1][P-1]; p++){
        scanf("%lld", p);
    }
    for (int i = 0; i < M; i++){
        for (int j = 0; j < P; j++){
            c[i][j] = 0;
        }
    }
    for (int i = 0; i < M; i++){
        for (int j = 0; j < P; j++){
            for (int k = 0; k < N; k++){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    for (int i = 0; i < M; i++){
        for (int j = 0; j < P; j++){
            printf("%lld ", c[i][j]);
        }
        printf("\n");
    }
}

