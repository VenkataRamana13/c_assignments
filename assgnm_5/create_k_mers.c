#include <stdio.h>
int main(){
    int L, K, m; scanf("%d%d%d", &L, &K, &m); 
    char s[L+1]; scanf("%s", s); 
    int i = 0, turns = 0; 
    while(i < L){
        if (turns != 0 && !(turns % m)){
            printf("\n"); 
            i -= m;  
            for (int j = 0; j < K; j++){
                printf("%c", s[i]);
                turns++; 
                if (i == L-1) break; 
                i++; 
            }
            printf("\n"); 
            i--; 
        }
        if (i == L-1) break; 
        printf("%c", s[i]); 
        turns++; 
        i++; 
    }
}
