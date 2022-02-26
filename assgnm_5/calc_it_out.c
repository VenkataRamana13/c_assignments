#include <stdio.h>
long long MOD = 1e9 + 7; 

int main(){
    int N, M; scanf("%d%d", &N, &M); 
    int a[N][M]; 
    for (int *p = (int *)a; p <= &a[N - 1][M - 1]; p++){
        scanf ("%d", p); 
        }
    int Q; scanf("%d", &Q); 
    int b[Q][4]; 
    for (int *p = (int *)b; p <= &b[Q-1][3]; p++){
        scanf("%d", p); 
    }
    for (int i = 0; i < Q; i++){
        long long product = 1; 
        for (int x = b[i][0]; x <= b[i][2]; x++){
            for (int y = b[i][1]; y <= b[i][3]; y++){
                product = ((product%MODO)*(a[y][x]%MOD))%MOD;
            }
        }
        printf("%lld\n", product);
    }
}
