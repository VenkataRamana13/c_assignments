/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : guassian.c

* Purpose : program to solve system of linear equations using 
*           guassian elimination

* Creation Date : 22-01-2022

* last Modified : Sun 23 Jan 2022 09:39:12 PM IST

* Created By : Venkata Ramana

_._._._._._._._._._._._._._._._._._._._._.*/
#include <stdio.h>
int main(){
    int N; scanf("%d", &N);
    double x[N][N], c[N];
    for (double *p = (double *)x; p <= &x[N-1][N-1]; p++){
        scanf("%lf", p);
    }
    for (int i = 0; i < N; i++){
        scanf("%lf", &c[i]);
    } 
    double matrix[N][N+1];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            matrix[i][j] = x[i][j];
        }
    }
    for (int i = 0; i < N; i++){
        matrix[i][N] = c[i]; 
    }
    for (int col = 0; col < N; col++){
        for(int i = N - 1; i > col; i--){
            int k = i - 1;
            for (;;){ 
            if(matrix[k][col] == 0)
                k--;
            else 
                break;
            }
            double frac = matrix[i][col]/matrix[k][col];
            for (int l = 0; l < N + 1; l++){
                matrix[i][l] -= frac*matrix[k][l]; 
            }
            k = 0; 
        }
    }
/*    for (int i = 0; i < N; i++){
        for (int j = 0; j < N+1; j++){
            printf("%lf\t", matrix[i][j]);
        }
        printf("\n");
    }
*/ /*   double y[N+1]; double sum = 0;
    y[0] = -1; int m = 0; 
    for (int i = N - 1; i >= 0; i--){
        for (int j = 0; j < N - i; j++){
            sum -= y[j]*matrix[i][N - j];         
        }
    y[m] = sum/matrix[i][N - m];
    m++;
    sum = 0; 
    }*/
/*    for(int x = 0; x < N + 1; x++){
        printf("%lf\n", y[x]);
    }
}*/
    double y[N]; 
    /*for (int i = 0; i < N; i++){
        y[i] = 0;
        for (int j = 0; j < i; j++){
            y[i] = 0; 
            y[i] -= matrix[N - i - 1][N - j - 1]*y[i-1];
        }
        y[i] += c[N - i - 1]; 
        y[i] = c[N - i - 1]/matrix[N-i-1][N-i-1];
    }*/
    y[N-1] = matrix[N-1][N]/matrix[N-1][N-1];

	 for(int i=N-2;i>=0;i--)
	 {
		  y[i] = matrix[i][N];
		  for(int j=i+1;j<=N-1;j++)
		  {
		  		y[i] = y[i] - matrix[i][j]*y[j];
		  }
		  y[i] = y[i]/matrix[i][i];
	 }
    for (int k = 0; k < N; k++){
        printf("%lf\n", y[k]);
    }
}
