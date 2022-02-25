#include <stdio.h>
int main(){
    int L, K, m; scanf("%d%d%d", &L, &K, &m); 
    char s[L+1]; scanf("%s", s);  
    for (int i = 0; i < L-K+m; i += K - m){ 
        int j = K; 
        while (j--){
            if ((i + K - j - 1) == L + 1){
                break; 
            }
            printf ("%c", s[i + K - j - 1]); 
        }
        printf ("\n"); 
    }
}
