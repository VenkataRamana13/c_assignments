#include <stdio.h>
#include <stdlib.h>

typedef long long ll;
ll MOD = 1e9 + 7; 

ll prod(ll, ll); 

int main(){
    ll N, M; scanf("%lld%lld", &N, &M); 
    ll (*a)[M] = malloc(sizeof(ll[N][M]));
    for (ll *p = &a[0][0]; p <= &a[N - 1][M - 1]; p++){
        scanf ("%lld", p); 
        }
    ll Q; scanf("%lld", &Q); 
    ll (*b)[4] = malloc(sizeof(ll[Q][4])); 
    for (ll *p = &b[0][0]; p <= &b[Q-1][3]; p++){
        scanf("%lld", p); 
    }
    for (int i = 0; i < Q; i++){
        long long product = 1; 
        for (int x = b[i][0]; x <= b[i][2]; x++){
            for (int y = b[i][1]; y <= b[i][3]; y++){
                product = (long long) (product%MOD)*(a[y][x]%MOD)%MOD;
    for (ll i = 0; i < Q; i++){
        ll product = 1; 
        for (ll x = b[i][0]; x <= b[i][2]; x++){
            for (ll y = b[i][1]; y <= b[i][3]; y++){
                product = prod(product, a[y][x]); 
            }
        }
        printf("%lld\n", product);
    }
    free(a); 
    free(b); 
}

ll prod(ll a, ll b){
    ll n = 0; 
    a %= MOD; 
    while(b>0){
        if (b%2) n = (n + a)%MOD; 
        a = (a * 2) % MOD; 
        b /= 2; 
    }
    return n;
}
