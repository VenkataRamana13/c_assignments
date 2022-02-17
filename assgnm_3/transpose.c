/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : transpose.c

* Purpose :

* Creation Date : 24-01-2022

* Last Modified : Mon 24 Jan 2022 05:34:32 PM IST

* Created By : Venkata Ramana

_._._._._._._._._._._._._._._._._._._._._.*/
#include <stdio.h>
int main(){
    int M;
    scanf("%d",&M);
    int N; 
    scanf("%d", &N);
    int a[M][N];
    for (int *p = (int *)a; p <= &a[M-1][N-1]; p++){
        scanf("%d", p);
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

