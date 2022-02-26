#include <stdio.h>
#include <stdlib.h>

long long MOD = 1e9 + 7; 

int main(){
    int N, M; scanf("%d%d", &N, &M); 
    int (*a)[M] = malloc(sizeof(int[N][M]));
    for (int *p = &a[0][0]; p <= &a[N - 1][M - 1]; p++){
        scanf ("%d", p); 
        }
    int Q; scanf("%d", &Q); 
    int (*b)[4] = malloc(sizeof(int[Q][4])); 
    for (int *p = &b[0][0]; p <= &b[Q-1][3]; p++){
        scanf("%d", p); 
    }
    for (int i = 0; i < Q; i++){
        long long product = 1; 
        for (int x = b[i][0]; x <= b[i][2]; x++){
            for (int y = b[i][1]; y <= b[i][3]; y++){
                product = ((product%MOD)*(a[y][x]%MOD))%MOD;
            }
        }
        printf("%lld\n", product);
    }
    free(a); 
    free(b); 
}
