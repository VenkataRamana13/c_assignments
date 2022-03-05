#include <stdio.h>
#include <stdlib.h>

typedef long long ll;
ll MOD = 1e9 + 7; 

int main(){
    ll N, K; scanf("%lld%lld", &N, &K); 
    ll a[N]; 
    for (ll i = 0; i < N; i++){
        scanf("%lld", &a[i]); 
    }
    for (int i = 0; i < N; i++){

    ll counts = 0, lines = 0; 
    for (ll i = 0; i < N; i++){
        if (a[i] < 8 && a[i] >= 0){
            lines = ((lines%MOD) + (a[i]%MOD))%MOD; 
            counts++; 
        }
        else if(a[i] >= 8){
            lines = (lines + 8)%MOD; 
            counts++; 
        }
        else continue; 
        if (lines >= K) {
            printf("%lld\n", counts); 
            exit(0);  
        }
    }
    printf("-1\n"); 
} 
