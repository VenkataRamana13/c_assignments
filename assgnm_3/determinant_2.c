/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : determinant_2.c

* Purpose : To calculate determinant of a matrix with large numbers using recursion

* Creation Date : 21-01-2022

* Last Modified : Fri 21 Jan 2022 02:47:07 PM IST

* Created By : Venkata Ramana

_._._._._._._._._._._._._._._._._._._._._.*/
#include <stdio.h>
const long long M = 1000000007; 
long long determinant(long long *, int);
long long det_cofactor(long long *, int, int);
int main(){
    int size;
    scanf("%d", &size);
    long long matrix[size][size];
    for (long long *p = &matrix[0][0]; p <= &matrix[size-1][size-1]; p++){
        scanf("%lld", p);
    }
    printf("%lld\n",determinant((long long*)matrix, size));
}
long long determinant(long long *matrix, int size){

    long long det = 0;
    if (size == 1)
        return *matrix;
    enum{ODD = -1, EVEN = 1}sign;
    for (int col = 0; col < size; col++){
        if (col % 2 == 0)
            sign = EVEN;
        else
            sign = ODD;
        det = (det%M + ((sign * matrix[col])%M* det_cofactor(matrix, col, size)%M)%M)%M;
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

