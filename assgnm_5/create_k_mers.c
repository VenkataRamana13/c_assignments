#include <stdio.h>
int main(){
    int L, K, m; scanf("%d%d%d", &L, &K, &m); 
    char s[L+1]; gets(s);  
    for (int i = 0; i < L; i += K - m){ 
        for (int j = 0; j < K; j++){
            if (i + j > L){

            printf ("%c", s[i + j]); 
    }
}
