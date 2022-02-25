#include <stdio.h>
int main(){
    int L, K, m; scanf("%d%d%d", &L, &K, &m); 
    char s[L+1]; scanf("%s", s);  
    for (int i = 0; i < L; i += K - m){ 
        int j = K; 
        while (j--){
            printf ("%c", s[i + K - j]); 
        }
        printf ("\n"); 
    }
}
