/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : LU_decomposition.c

* Purpose : To find the LU decomposition of a a

* Creation Date : 22-01-2022

* Last Modified : Mon 24 Jan 2022 08:26:30 PM IST

* Created By : Venkata Ramana

_._._._._._._._._._._._._._._._._._._._._.*/
#include <stdio.h>
const int M = 1000000007;
int determinant(int *, int);
int det_cofactor(int *, int, int);
int main(){
    int N;
    scanf("%d", &N);
    int a[N][N];
    for (int *p = &a[0][0]; p <= &a[N-1][N-1]; p++){
        scanf("%d", p);
    }
    printf("%d\n",determinant((int*)a, N));
}
int determinant(int *a, int N){

    int det = 0;
    if (N == 1)
        return *a;
    enum{ODD = -1, EVEN = 1}sign;
    for (int col = 0; col < N; col++){
        if (col % 2 == 0)
            sign = EVEN;
        else
            sign = ODD;
        det = (det + ((sign * a[col])* det_cofactor(a, col, N)));
    }
    return det;
}

int det_cofactor(int *a, int col, int N){
    int temp[(N-1)*(N-1)], row = 0, k = -1;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if(i == row || j == col)
                continue;
            else
            {
                temp[++k] = *(a + i*N + j);
            }
        }
    }
    return determinant(temp, N - 1);
}

