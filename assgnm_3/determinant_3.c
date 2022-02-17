/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : determinant_3.c

* Purpose : finding determinant of a matrix and converting to required base

* Creation Date : 21-01-2022

* Last Modified : Sat 22 Jan 2022 12:43:12 PM IST

* Created By : Venkata Ramana

_._._._._._._._._._._._._._._._._._._._._.*/
#include <stdio.h>
const long long M = 1000000007;
long long determinant(long long *, int);
long long det_cofactor(long long *, int, int);

int main(){
    int q, b, size; scanf("%d", &q);
    if (q == 0){
        scanf("%d", &size);
    }
    else{
        scanf("%d", &size);
        scanf("%d", &b);
    }
    long long matrix[size][size];
    for (long long *p = &matrix[0][0]; p <= &matrix[size-1][size-1]; p++){
        scanf("%lld", p);
    }
    if (q == 0)
        printf("%lld\n",determinant((long long*)matrix, size));
    else{
        long long det = determinant((long long*)matrix, size);
        char c[50]; int i = -1;
        for(;;){
            /*int a; scanf("%d", &a);
    int N; scanf("%d", &N);
    int b[20]; int i = -1; 
    for(;;){
        b[++i] = N % a; 
        if (N == 0)
            break; 
        N /= a; 
    }
    for (int j = i - 1; j >= 0; j--){
        printf("%d", b[j]);
    }
*/      
        if ((det % b) >= 10)
            c[++i] = 'a' + (det % b) - 10; 
        else 
            c[++i] = '0' + det % b;
        if (det == 0)
            break;
        det /= b;
        }
        for (int j = i - 1; j >= 0; j--){
            printf("%c", c[j]);
        }
        printf("\n");
    }
}
long long determinant(long long *matrix, int size){

    long long det = 0;
    if (size == 1)
        return *matrix;
    for (int col = 0; col < size; col++){
        det = (det%M + ((matrix[col])%M* det_cofactor(matrix, col, size)%M)%M)%M;
    }
    return (det+M)%M;
}
long long det_cofactor(long long *matrix, int col, int size){
    long long temporary[(size-1)*(size-1)], row = 0, k = -1;

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if(i == row || j == col)
                continue;
            else
            {
                temporary[++k] = *(matrix + i*size + j);
            }
        }
    }
    return determinant(temporary, size - 1);
}
