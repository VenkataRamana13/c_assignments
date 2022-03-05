#include <stdio.h>
int main(){
    int L, K, m; scanf("%d%d%d", &L, &K, &m); 
    char s[L]; scanf("%s", s); 
    int prints = 0; 
    for (int pos = 0; pos < L; pos++){
       printf("%c", s[pos]); 
       prints++; 
       if (prints != 0 && (prints % K == 0)){  
           printf("\n"); 
           if (pos == L-1) break; 
           pos -= m;
       }
    }
}
