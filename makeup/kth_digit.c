#include <stdio.h>
int main(){
    int N, K; scanf("%d", &N); 
    long long a[N]; 
    for (int i = 0; i < N; i++){
        scanf("%lld", &a[i]); 
    }
    scanf("%d", &K); 
    int max = 0; 
    for (int i = 0; i < 32; i++){
        if (a[K] & 1 << i) max = i; 
    }
    if (max < K) printf("-1\n"); 
    else if (a[K] & 1 << K) printf("1\n"); 
    else printf("0\n"); 
}
