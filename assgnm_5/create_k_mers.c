#include <stdio.h>
int main(){
    int L, K, m; scanf("%d%d%d", &L, &K, &m); 
    char s[L+1]; scanf("%s", s); 
    for (int i = 0; i < L;  i++){
        if (!(i % K)){
            printf("\n"); 
            i -= m;   
            for (int j = 0; j < K; j++){
                printf("%c", s[i]);
                if (i == L-1) break; 
                i++; 
            }
            printf("\n"); 
        }
        if (i == L-1) break; 
        printf("%c", s[i]); 
    }
}

